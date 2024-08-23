#include<stdio.h>                   // Standard input/output library
#include<stdlib.h>                  // Standard library for memory allocation, process control, etc.               
#include<string.h>                  // Library for string handling functions.
#include<unistd.h>                  // Unix standard library for operating system API
#include<iostream>                  // Input-output stream library for C++                  

// Constants defining various values used in the filesystem simulation
#define MAXINODE 5                  // Maximum number of inodes

#define READ 1                      // Permission flag for read access
#define WRITE 2                     // Permission flag for write access

#define MAXFILESIZE 50              // Maximum file size in the simulated filesystem

#define REGULAR 1                   // File type flag for regular files
#define SPECIAL 2                   // File type flag for special files (not implemented in this code)

#define START 0                     // Seek start position flag (used in file pointer movement)
#define CURRENT 1                   // Seek current position flag                       
#define END 2                       // Seek end position flag

// Structure representing an inode, which stores file metadata
typedef struct superblock
{
    int ToatalInodes;               // Total number of inodes in the filesystem
    int FreeInode;                  // Number of free inodes available

}SUPERBLOCK, *PSUPERBLOCK;          // 'SUPERBLOCK' for creating the structure and 'PSUPERBLOCK' for creating pointer to the structure.

// Structure representing an inode, which stores file metadata
typedef struct inode 
{
    char FileName[50];              // Name of the file
    int InodeNumber;                // Unique inode number for each file
    int FileSize;                   // Size of the file as per filesystem
    int FileActualSize;             // Actual size of the file data
    int FileType;                   // Type of the file (regular or special)
    char *Buffer;                   // Pointer to the file data (actual content)
    int LinkCount;                  // Number of links (references) to this inode
    int ReferenceCount;             // Reference count indicating how many processes are using this file
    int permission;                 // Permission for the file (1 = Read, 2 = Write, 3 = Read\Write)
    struct inode *next;             // Pointer to the next inode in the linked list

}INODE, *PINODE, **PPINODE;         // 'INODE' for structure, 'PINODE' for pointer, 'PPINODE' for pointer to pointer

// Structure representing a file table entry, which keeps track of the open file status
typedef struct filetable
{
    int readoffset;                 // Current read offset for the file
    int writeoffset;                // Current write offset for the file
    int count;                      // Number of processes using this file table entry
    int mode;                       // Mode in which the file is opened (read\write\read-write)      
    PINODE ptrinode;                // Pointer to the inode associated with this file

}FILETABLE,*PFILETABLE;             // 'FILETABLE' for structure, 'PFILETABLE' for pointer to the structure

// Structure representing the User File Descriptor Table (UFDT) entry
typedef struct ufdt
{
    PFILETABLE ptrfiletable;        // Pointer to the flie table entry associated with this UFDT entry 

}UFDT;                              // 'UFDT' for structure

// Global variables
UFDT UFDTArr[50];                   // Array of UFDT entries, each representing an open file
SUPERBLOCK SUPERBLOCKobj;           // Instance of the superblock structure
PINODE head = NULL;                 // Head pointer for the linked list of inodes

// Display manual information based on the command name
void man(char *name)
{
    if(name == NULL)
    {
        return;
    }
    if(strcmp(name,"create") == 0)
    {
        printf("Description : Used to create new regular file\n");
        printf("Usage : create File_name Permission\n");
    }
    else if(strcmp(name,"read") == 0)
    {
        printf("Description : Used to read data from regular file\n");
        printf("Usage : read File_name No_Of_Bytes_To_Read\n");
    }
    else if(strcmp(name,"write") == 0)
    {
        printf("Description : Used to write into regular file\n");
        printf("Usage : write File_name\n After this enter the data that we want to write\n");
    }
    else if(strcmp(name,"ls") == 0)
    {
        printf("Description : Used to list all information of flies\n");
        printf("Usage : ls\n");
    }
    else if(strcmp(name,"stat") == 0)
    {
        printf("Description : Used to display information fo file\n");
        printf("Usage : stat File_name\n");
    }
    else if(strcmp(name,"fstat") == 0)
    {
        printf("Description : Used to display information fo file\n");
        printf("Usage : stat File_Descriptor\n");
    }
    else if(strcmp(name,"truncate") == 0)
    {
        printf("Description : Uset to remove data from file\n");
        printf("Usage : truncate File_name\n");
    }
    else if(strcmp(name,"open") == 0)
    {
        printf("Description : Used to open existing file\n");
        printf("Usage : open File_name mode\n");
    }
    else if(strcmp(name,"close") == 0)
    {
        printf("Description : Used to close opened file\n");
        printf("Usage : close File_name\n");
    }
    else if(strcmp(name,"closeall") == 0)
    {
        printf("Description : Used to closeall opened file\n");
        printf("Usage : closeall\n");
    }
    else if(strcmp(name,"lseek") == 0)
    {
        printf("Description : Used to change file offse\n");
        printf("Usage : lseek File_Name ChangeInOffset StartPoint\n");
    }
    else if(strcmp(name,"rm") == 0)
    {
        printf("Description : Used to delete the file\n");
        printf("Usage : rm File_Name\n");
    }
    else
    {
        // If the command is not found, display an error message
        printf("ERROR : No manual entry available.\n");
    }
}

void DisplayHelp()
{
    // Display a list of available commands and their purposes
    printf("ls : To list out all files\n");
    printf("clear : To clear console\n");
    printf("create : To create new file\n");
    printf("open : To open the file\n");
    printf("close : To close the file\n");
    printf("closeall : To close all opened files\n");
    printf("read : To Read the contents from file\n");
    printf("write : To Write contents into file\n");
    printf("exit : To Terminate file system\n");
    printf("stat : To Display information of file using name\n");
    printf("fstat : To Display information of file using file descriptor\n");
    printf("truncate : To Remove all data from file\n");
    printf("rm : To Delete the file\n");
}

// Function to get the file descriptor (FD) corresponding to a given file name
int GetFDFromName(char *name)
{
    int i = 0;

    // Loop through the UFDT array to find a file table entry matching the given name
    while(i<50)
    {
        // Check if the current UFDT entry's file table pointer is not NULL
        if(UFDTArr[i].ptrfiletable != NULL)
        {
            // Compare the file name in the inode with the provided name
            if(strcmp((UFDTArr[i].ptrfiletable->ptrinode->FileName),name) == 0)
            {
                break;
            }
        }

        i++;
    }

    // After the loop, check if we reached the end of the UFDT array without finding the file
    if(i == 50)     
    {
        return -1;
    }
    else                  
    {
        return i;
    }
}

// Function to get the inode structure pointer for a given file name
PINODE Get_Inode(char * name)
{
    PINODE temp = head;             // Start with the head of the inode list
    int i = 0;

    // Check if the provided file name is NULL
    if(name == NULL)
    {
        return NULL;
    }

    // Traverse the inode linked list
    while(temp != NULL)
    {
        // Compare the current inode's file name with the provided name
        if(strcmp(name,temp->FileName) == 0)
        {
            break;
        }

        temp = temp->next;          // Move to the next inode in the list
    }

    return temp;
}

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;

    while(i<=MAXINODE)
    {
        // Allocate memory for a new inode
        newn = (PINODE)malloc(sizeof(INODE));

        // Initialize the fields of the new inode
        newn->LinkCount = 0;                // No links to the inode initially
        newn->ReferenceCount = 0;           // No references to the inode initially
        newn->FileType = 0;                 // FileType is set to 0 (could mean uninitialized or regular file)
        newn->FileSize = 0;                 // Initial file size is 0

        newn->Buffer = NULL;                // Buffer is initially NULL, no data allocated yet
        newn->next = NULL;                  // Next inode in the list is NULL (will be set later)

        newn->InodeNumber = i;              // Assign an inode number starting from 1

        // Check if this is the first inode being created
        if(temp == NULL)
        {
            head = newn;                    // Set the head of the list to this new inode
            temp = head;                    // Update temp to point to the head
        }
        else
        {
            temp->next = newn;              // Link the previous inode to the new inode
            temp = temp->next;              // Move temp to point to the newly created inode
        }

        i++;                                // Increment the inode counter
    }

    printf("DILB created successfully\n");
}

// Function to initialize the Superblock and the UFDT array
void InitialiseSuperBlock()
{
    int i = 0;

    // Loop through all entries in the UFDT array
    while(i<MAXINODE)
    {
        // Set each file table pointer to NULL, indicating no open files
        UFDTArr[i].ptrfiletable = NULL;

        i++;
    }

    // Initialize the SUPERBLOCK object
    SUPERBLOCKobj.ToatalInodes = MAXINODE;      // Total number of inodes to MAXINODE
    SUPERBLOCKobj.FreeInode = MAXINODE;         // Initially all inodes are free
}

// Function to create a new file with the given name and permissions
//  CreateFile      PPA.txt     3     
int CreateFile(char *name,int permission)
{
    int i = 3;                          // Initialize index for UFDT array; start from index 3
    PINODE temp = head;

    // Validate input parameters
    if((name == NULL) || (permission == 0) || (permission > 3))
    {
        return -1;                      // Return error code -1 for invalid input
    }

    // Check if there are free inodes available
    if(SUPERBLOCKobj.FreeInode == 0)
    {
        return -2;                      // Return error code -2 if no free inodes are available
    }

    // Decrease the count of free inodes
    (SUPERBLOCKobj.FreeInode)--;

    // Check if the file with the same name already exists
    if(Get_Inode(name) != NULL)
    {
        return -3;                      // Return error code -3 if file already exists
    }

    // Find and unused inode
    while(temp != NULL)
    {
        if(temp->FileType == 0)
        {
            break;                      
        }
    
        temp = temp->next;              
    }

    // Find an unused slot in the UFDT array
    while(i<50)
    {
        if(UFDTArr[i].ptrfiletable == NULL)
        {
            break;
        }

        i++;
    }

    // Initialize file table entry
    UFDTArr[i].ptrfiletable = (PFILETABLE)malloc(sizeof(FILETABLE));

    UFDTArr[i].ptrfiletable->count = 1;
    UFDTArr[i].ptrfiletable->mode = permission;
    UFDTArr[i].ptrfiletable->readoffset = 0;
    UFDTArr[i].ptrfiletable->writeoffset = 0;

    UFDTArr[i].ptrfiletable->ptrinode = temp;       // Assign the inode to the file table entry

    // Initialize the inode
    strcpy(UFDTArr[i].ptrfiletable->ptrinode->FileName,name);
    UFDTArr[i].ptrfiletable->ptrinode->FileType = REGULAR;
    UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount = 1;
    UFDTArr[i].ptrfiletable->ptrinode->LinkCount = 1;
    UFDTArr[i].ptrfiletable->ptrinode->FileSize = MAXFILESIZE;
    UFDTArr[i].ptrfiletable->ptrinode->FileActualSize = 0;
    UFDTArr[i].ptrfiletable->ptrinode->permission = permission;

    // Allocate memory for file data
    UFDTArr[i].ptrfiletable->ptrinode->Buffer = (char *)malloc(MAXFILESIZE);

    return i;                   // Return the index of the file table entry
}

// Function to remove a file from the file system
int rm_File(char * name)
{
    int fd = 0;                 // File descriptor to store the result of GetFDFromName

    // Get the file descriptor associated with the file name 
    fd = GetFDFromName(name);

    if(fd == -1)
    {
        return -1;              // Return error code -1 if file was not found  
    }

    // Decrease the link count of the inode associated with the file
    (UFDTArr[fd].ptrfiletable->ptrinode->LinkCount)--;

    // Check if the link count of the inode has reached zero
    if(UFDTArr[fd].ptrfiletable->ptrinode->LinkCount == 0)
    {
        // If link count is zero, mark the inode as unused
        UFDTArr[fd].ptrfiletable->ptrinode->FileType = 0;

        // Free the memory allocated for the file's buffer
        // free(UFDTArr[fd].ptrfiletable->ptrinode->Buffer);

        // Free the memory allocated for the file table entry
        free(UFDTArr[fd].ptrfiletable);
    }

    // Set the UFDT slot to NULL, indicating it's no longer in use
    UFDTArr[fd].ptrfiletable = NULL;

    // Increase the count of free inodes
    (SUPERBLOCKobj.FreeInode)++;
}

// Function to read data from a file
int ReadFile(int fd, char * arr, int isize)
{
    int read_size = 0;              // Variable to store the actual number of bytes to read

    // Check if the file descriptor is valid
    if(UFDTArr[fd].ptrfiletable == NULL)        
    {
        return -1;                  // Return -1 if file discriptor is not valid (file not open)
    }

    // Check if the file is opened in read mode or read/write mode
    if(UFDTArr[fd].ptrfiletable->mode != READ && UFDTArr[fd].ptrfiletable->mode != READ+WRITE)  
    {
        return -2;                  // Return -2 if file is not opened in a mode that allows reading
    }

    // Check if the permissions of the file allow reading
    if(UFDTArr[fd].ptrfiletable->ptrinode->permission != READ && UFDTArr[fd].ptrfiletable->ptrinode->permission != READ+WRITE) 
    {
        return -2;                  // Return -2 if file does not have read permission
    }

    // Check if the read offset is at the end of the file
    if(UFDTArr[fd].ptrfiletable->readoffset == UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)  
    {
        return -3;                  // Return -3 if there is no data left to read (end of file)
    }

    // Check if the file type is regular (not a special file)
    if(UFDTArr[fd].ptrfiletable->ptrinode->FileType != REGULAR)     
    {
        return -4;                  // Return -4 if the file is not a regular file
    }

    // Calculate the number of bytes available to read
    read_size = (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize) - (UFDTArr[fd].ptrfiletable->readoffset);

    // Check if the requested read size exceeds the available data size
    if(read_size < isize)
    {
        // If the requested size is greater than available size, read only the available size
        strncpy(arr,(UFDTArr[fd].ptrfiletable->ptrinode->Buffer) + (UFDTArr[fd].ptrfiletable->readoffset),read_size);

        // Update the read offset
        UFDTArr[fd].ptrfiletable->readoffset = UFDTArr[fd].ptrfiletable->readoffset + read_size;
    }
    else
    {
        // If the requested size is within the available size, read the requested size 
        strncpy(arr,(UFDTArr[fd].ptrfiletable->ptrinode->Buffer) + (UFDTArr[fd].ptrfiletable->readoffset),isize);

        // Update the read offset
        (UFDTArr[fd].ptrfiletable->readoffset) = (UFDTArr[fd].ptrfiletable->readoffset) + isize;
    }

    // Return the number of bytes read
    return isize;
}

// Function to write data into a file
int WriteFile(int fd, char *arr, int isize)
{
    // Check if the file is opened in write or read/write mode
    if(((UFDTArr[fd].ptrfiletable->mode) != WRITE) && ((UFDTArr[fd].ptrfiletable->mode) != READ+WRITE))
    {
        return -1;              // Return -2 if flie is not opened in a mode that allows writing
    }

    // Check if the file has the necessary write permissions
    if(((UFDTArr[fd].ptrfiletable->ptrinode->permission) != WRITE) && ((UFDTArr[fd].ptrfiletable->ptrinode->permission) != READ+WRITE))
    {
        return -1;              // Return -1 if file does not have write permissions
    }

    // Check if the write offset is at the maximum file size 
    if((UFDTArr[fd].ptrfiletable->writeoffset) ==  MAXFILESIZE) 
    {
        return -2;              // Return -2 if there is no more space left to write (file is full)
    }

    // Check if the file type is regular (not a special file)
    if((UFDTArr[fd].ptrfiletable->ptrinode->FileType) != REGULAR)   
    {
        return -3;              // Return -3 if the file is not a regular file
    }

    // Copy data from the provided buffer (arr) to the file's buffer at the write offset 
    strncpy((UFDTArr[fd].ptrfiletable->ptrinode->Buffer) + (UFDTArr[fd].ptrfiletable->writeoffset),arr,isize);

    // Update the write offset by adding the number of bytes written
    (UFDTArr[fd].ptrfiletable->writeoffset) = (UFDTArr[fd].ptrfiletable->writeoffset) + isize;

    // Update the actual size of the file
    (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize) = (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize) + isize;

    // Return the number of bytes written
    return isize;
}

// Function to open a file and return its file descriptor
int OpenFile(char *name, int mode)
{
    int i = 0;
    PINODE temp = NULL;

    // Validate input parameters
    if(name == NULL || mode <= 0)
    {
        return -1;              // Return -1 if invalid input parameters
    }

    // Get the inode (file information) using the file name
    temp = Get_Inode(name);

    // Check if the file does not exist
    if(temp == NULL)
    {
        return -2;              // Return -2 if file does not exist
    }

    // Check if the mode requested exceeds the file's permissions
    if(temp->permission < mode)
    {
        return -3;              // Return -3 if the file does not have the requested permissions
    }

    // Find an empty slot in the UFDT (User File Decriptor Table) array
    while(i<50)
    {
        if(UFDTArr[i].ptrfiletable == NULL)
        {
            break;              // Found an empty slot
        }
        i++;
    }

    // Allocate memory for the file table entry
    UFDTArr[i].ptrfiletable = (PFILETABLE)malloc(sizeof(FILETABLE));

    // Check if memory allocation failed
    if(UFDTArr[i].ptrfiletable == NULL)     
    {
        return -1;              // Return -1 if memory allocation failed
    }

    // Initialize the file table entry
    UFDTArr[i].ptrfiletable->count = 1;     // File descriptor count
    UFDTArr[i].ptrfiletable->mode = mode;   // Access mode

    // Initialize file offsets based on the mode
    if(mode == READ + WRITE)
    {
        UFDTArr[i].ptrfiletable->readoffset = 0;
        UFDTArr[i].ptrfiletable->writeoffset = 0;
    }
    else if(mode == READ)
    {
        UFDTArr[i].ptrfiletable->readoffset = 0;
    }
    else if(mode == WRITE)
    {
        UFDTArr[i].ptrfiletable->writeoffset = 0;
    }

    // Set the inode pointer and increment the reference count
    UFDTArr[i].ptrfiletable->ptrinode = temp;
    (UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount)++;

    // Return the file descriptor (index in UFDT array)
    return i;
}

// Function to close a file by its file descriptor
void CloseFileByFD(int fd)
{
    // Reset the read offset to the beginning of the file
    UFDTArr[fd].ptrfiletable->readoffset = 0;

    // Reset the write offset to the beginning of the file
    UFDTArr[fd].ptrfiletable->writeoffset = 0;

    // Decrement the reference count of the inode
    // This indicates that one less file descriptor is referring to this file
    (UFDTArr[fd].ptrfiletable->ptrinode->ReferenceCount)--;
}

// Function to close a file by its name
int CloseFileByName(char *name)
{
    int i = 0;

     // Get the file descriptor corresponding to the file name
    i = GetFDFromName(name);

    // If the file descriptor is invalid (file not found), return -1
    if(i == -1)
    {
        return -1;
    }

    // Reset the read offset to the beginning of the file
    UFDTArr[i].ptrfiletable->readoffset = 0;

    // Reset the write offset to the beginning of the file
    UFDTArr[i].ptrfiletable->writeoffset = 0;

    // Decrement the reference count of the inode
    (UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount)--;

    // Return 0 indicating successful closure of the file
    return 0;
}

// Function to close all open files
void CloseAllFile()
{
    int i = 0;

    // Iterate through the entire UFDT array to check for open files
    while(i<MAXFILESIZE)
    {
        // Check if there is an active file table entry at this index
        if(UFDTArr[i].ptrfiletable != NULL)
        {
            // Reset the read offset to the beginning of the file
            UFDTArr[i].ptrfiletable->readoffset = 0;

            // Reset the write offset to the beginning of the file
            UFDTArr[i].ptrfiletable->writeoffset = 0;

            // Decrement the reference count of the inode
            (UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount)--;
            //break;
        }
        i++;
    }
}

// Function to adjust the file offset (seek) for reading or writing
int LseekFile(int fd, int size, int from)
{
    // Validate file descriptor and 'from' parameter
    if((fd<0) || (from > 2))    
    {
        return -1;              // Invalid input
    }

    // Check if the file table entry exists for the given file descriptor
    if(UFDTArr[fd].ptrfiletable == NULL)    
    {
        return -1;              // File is not open
    }

    // Handle read and read/write modes
    if((UFDTArr[fd].ptrfiletable->mode == READ) || (UFDTArr[fd].ptrfiletable->mode == READ+WRITE))
    {
        // Seek relative to the current position
        if(from == CURRENT)
        {
            // Validate the new offset
            if(((UFDTArr[fd].ptrfiletable->readoffset) + size) > UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)    
            {
                return -1;              // Seeking beyond file size
            }
            if(((UFDTArr[fd].ptrfiletable->readoffset) + size) < 0) 
            {
                return -1;              // Seeking before the start of the file
            }

            // Update the read offset
            (UFDTArr[fd].ptrfiletable->readoffset) = (UFDTArr[fd].ptrfiletable->readoffset) + size;
        }
        // Seek relative to the start of the file
        else if(from == START)
        {
            // Validate the new offset
            if(size > (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))  
            {
                return -1;              // Seeking beyond file size
            }
            if(size < 0) 
            {   
                return -1;              // Negative offset
            }

            // Set the read offset
            (UFDTArr[fd].ptrfiletable->readoffset) = size;
        }
        // Seek relative to the end of the file
        else if(from == END)
        {
            // Validate the new offset
            if((UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize) + size > MAXFILESIZE)   
            {
                return -1;              // Seeking beyond maximum file size
            }
            if(((UFDTArr[fd].ptrfiletable->readoffset) + size) < 0) 
            {
                return -1;              // Negative offset
            }


            // Set the read offset relative to the end of the file
            (UFDTArr[fd].ptrfiletable->readoffset) = (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize) + size;
        }
    }
    // Handle write mode
    else if(UFDTArr[fd].ptrfiletable->mode == WRITE)
    {
        // Seek relative to the current position
        if(from == CURRENT)
        {
            // Validate the new offset
            if(((UFDTArr[fd].ptrfiletable->writeoffset) + size) > MAXFILESIZE)  
            {
                return -1;              // Seeking beyond maximum file size
            }
            if(((UFDTArr[fd].ptrfiletable->writeoffset) + size) < 0)    
            {
                return -1;              // Negative offset
            }
            if(((UFDTArr[fd].ptrfiletable->writeoffset) + size) > (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))
            {
                // Extend the file size if seeking beyond current file size
                (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize) = (UFDTArr[fd].ptrfiletable->writeoffset) + size;
            }
            
            // Update the write offset
            (UFDTArr[fd].ptrfiletable->writeoffset) = (UFDTArr[fd].ptrfiletable->writeoffset) + size;
        }
        // Seek relative to the start of the file
        else if(from == START)
        {
            // Validate the new offset
            if(size > MAXFILESIZE)  
            {
                return -1;              // Seeking beyond maximum file size
            }
            if(size < 0)    
            {
                return -1;              // Negative offset
            }
            if(size > (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))
            {
                // Extend the file size if seeking beyond current file size
                (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize) = size;
            }

            // Seek relative to the end of the file
            (UFDTArr[fd].ptrfiletable->writeoffset) = size;
        }
        // Seek relative to the end of the file
        else if(from == END)
        {
            // Validate the new offset
            if((UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize) + size > MAXFILESIZE)   
            {
                return -1;              // Seeking beyond maximum file size
            }
            if((UFDTArr[fd].ptrfiletable->writeoffset) + size < 0) 
            {
                return -1;              // Negative offset
            }
            
            // Set the write offset relative to the end of the file
            (UFDTArr[fd].ptrfiletable->writeoffset) = (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize) + size;
        }
    }
}

// function lists all existing files and their metadata in the file system
void ls_file()
{
    int i = 0;
    PINODE temp = head;

    // Check if there are no files in the file system
    if(SUPERBLOCKobj.FreeInode == MAXINODE)
    {
        printf("Error : There are no files\n");
        return;
    }

    // Print the table header
    printf("\nFile Name\tInode number\tFile size\tLink count\n");
    printf("----------------------------------------------------------------\n");

    // Traverse the inode list
    while(temp != NULL)
    {
        // Print details only for active files (FileType != 0)
        if(temp->FileType != 0)
        {
            printf("%s\t\t%d\t\t%d\t\t%d\n",temp->FileName,temp->InodeNumber,temp->FileActualSize,temp->LinkCount);
        }
        temp = temp->next;
    }

    // Print the footer
    printf("----------------------------------------------------------------\n");
}

// function displays detailed information about a file based on its file descriptor
int fstat_file(int fd)
{
    PINODE temp = head;
    int i = 0;

    // Check if the provided file descriptor is valid
    if(fd < 0)  
    {
        return -1;
    }

    // Check if the file table entry is NULL, meaning the file is not open
    if(UFDTArr[fd].ptrfiletable == NULL)    
    {
        return -2;
    }

    // Retrieve the inode associated with the file descriptor
    temp = UFDTArr[fd].ptrfiletable->ptrinode;

    // Print the file's statistical information
    printf("\n----------Statistical Information about file-----------\n");
    printf("File name : %s\n",temp->FileName);
    printf("Inode Number %d\n",temp->InodeNumber);
    printf("File size : %d\n",temp->FileSize);
    printf("Actual File size : %d\n",temp->FileActualSize);
    printf("Link count : %d\n",temp->LinkCount);
    printf("Reference count : %d\n",temp->ReferenceCount);

    // Determine and print the file's permissions
    if(temp->permission == 1)
    {
        printf("File Permission : Read only\n");
    }
    else if(temp->permission == 2)
    {
        printf("File Permission : Write\n");
    }
    else if(temp->permission == 3)
    {
        printf("File Permission : Read & Write\n");
    }
    printf("--------------------------------------------------------\n\n");

    return 0;
}

// function displays detailed information about a file based on its name
int stat_file(char * name)
{
    PINODE temp = head;
    int i = 0;

    // Check if the provided file name is NULL
    if(name == NULL) 
    {
        return -1;
    }

    // Traverse the inode list to find the file with the specified name
    while(temp != NULL)
    {
        if(strcmp(name,temp->FileName) == 0)
        {
            break;
        }

        temp = temp->next;
    }

    // If the file is not found
    if(temp == NULL)    
    {
        return -2;
    }

    // Print the statistical information of the found file
    printf("\n----------Statistical Information about file------------\n");
    printf("File name : %s\n",temp->FileName);
    printf("Inode Number : %d\n",temp->InodeNumber);
    printf("File size : %d\n",temp->FileSize);
    printf("Actual File size : %d\n",temp->FileActualSize);
    printf("Link count : %d\n",temp->LinkCount);
    printf("Reference count : %d\n",temp->ReferenceCount);

    // Display the file permissions
    if(temp->permission == 1)
    {
        printf("File Permission : Read only\n");
    }
    else if(temp->permission == 2)
    {
        printf("File Permission : Write\n");
    }
    else if(temp->permission == 3)
    {
        printf("File Permission : Read & Write\n");
    }

    printf("-----------------------------------------------------------\n");

    return 0;
}

// function clears the contents of a file and resets its size to zero while retaining the file itself for future operations.
int truncate_File(char * name)
{
    // Get the file descriptor associated with the given file name
    int fd = GetFDFromName(name);

    // If the file doesn't exist, return an error code (-1)
    if(fd == -1)
    {
        return -1;
    }

    // Clear the file's buffer, effectively erasing its contents
    // memset is used to fill the buffer with zeros (0) over 1024 bytes
    memset(UFDTArr[fd].ptrfiletable->ptrinode->Buffer,0,1024);

    // Reset the file's read offset to 0
    // This means any future read operations will start from the beginning of the file
    UFDTArr[fd].ptrfiletable->readoffset = 0;

    // Reset the file's write offset to 0
    // This means any future write operations will start from the beginning of the file
    UFDTArr[fd].ptrfiletable->writeoffset = 0;

    // Update the file's actual size to 0
    // Since the file is now empty, its actual size is set to 0
    UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize = 0;
}

int main()
{
    char *ptr = NULL;                               // Pointer for dynamic memory allocation
    int ret = 0, fd = 0, count = 0;                 // Return value, file descriptor and command word count
    char command[4][80], str[80], arr[1024];        // Arrays to store commands and user input    

    InitialiseSuperBlock();                         // Initialize the superblock of the file system
    CreateDILB();                                   // Create and initialize the Directory Inode List Block

    // Main loop for the shell
    while(1)
    {
        fflush(stdin);                              // Clear input buffer
        strcpy(str,"");                             // Initialize input string

        printf("\nMarvellous VFS : > ");            // Prompt for user input

        fgets(str,80,stdin);                        // Read input from the user
        // scanf("%[^'\n']s",str);

        // Parse command and arguments
        count = sscanf(str,"%s %s %s %s",command[0],command[1],command[2],command[3]);

        // Handling commands with a single argument
        if(count == 1)
        {
            if(strcmp(command[0],"ls") == 0)        // List files
            {
                ls_file();
            }
            else if(strcmp(command[0],"closeall") == 0)     // Close all open files
            {
                CloseAllFile();
                printf("All files closed successfully\n");
                continue;
            }
            else if(strcmp(command[0],"cls") == 0)          // Clear screen
            {
                system("cls");
                continue;
            }
            else if(strcmp(command[0],"help") == 0)         // Display help information
            {
                DisplayHelp();
                continue;
            }
            else if(strcmp(command[0],"exit") == 0)         // Exit the shell
            {
                // Deallocate all data structures
                printf("Terminating the Marvellous Virtual File System\n");
                break;
            }
            else
            {
                printf("\nERROR : Command not found!!!\n");
                continue;
            }
        }
        // Handling commands with two arguments
        else if(count == 2)
        {
            if(strcmp(command[0],"stat") == 0)              // Show file status by name
            {
                ret = stat_file(command[1]);

                if(ret == -1)
                {
                    printf("ERROR : Incorrect parameters\n");
                }
                if(ret == -2)
                {
                    printf("ERROR : There is no such file\n");
                }    

                continue;
            }
            else if(strcmp(command[0],"fstat") == 0)        // Show file status by file descriptor
            {
                ret = fstat_file(atoi(command[1]));

                if(ret == -1)
                {
                    printf("ERROR : Incorrect parameters\n");
                }
                if(ret == -2)
                {
                    printf("ERROR : There is no such file\n");
                }

                continue;
            }
            else if(strcmp(command[0],"close") == 0)        // Close file by name
            {
                ret = CloseFileByName(command[1]);

                if(ret == -1)
                {
                    printf("ERROR : There is no such file\n");
                }

                continue;
            }
            else if(strcmp(command[0],"rm") == 0)           // Remove file by name
            {
                ret = rm_File(command[1]);

                if(ret == -1)
                {
                    printf("ERROR : There is no such file\n");
                }

                continue;
            }
            else if(strcmp(command[0],"man") == 0)          // Display manual page for a command
            {
                man(command[1]);
            }
            else if(strcmp(command[0],"write") == 0)        // Write data to file
            {
                fd = GetFDFromName(command[1]);

                if(fd == -1)
                {
                    printf("ERROR : Incorrect parameter\n");
                    continue;
                }
                printf("Enter the data : \n");
                scanf("%[^\n]s",arr);                       // Read data to write

                ret = strlen(arr);

                if(ret == 0)
                {
                    printf("ERROR : Incorrect parameter\n");
                    continue;
                }

                ret = WriteFile(fd,arr,ret);

                if(ret == -1)
                {
                    printf("ERROR : Permission denied\n");
                }
                if(ret == -2)
                {
                    printf("ERROR : There is no sufficient memory to write\n");
                }
                if(ret == -3)
                {
                    printf("ERROR : It is not regular file\n");
                }
            }
            else if(strcmp(command[0],"truncate") == 0)         // Truncate file to zero size
            {
                ret = truncate_File(command[1]);

                if(ret == -1)
                {
                    printf("ERROR : Incorrect parameter\n");
                }
            }
            else
            {
                printf("\nERROR : Command not found !!!\n");        // Invalid command
                continue;
            }
        }
        // Handling commands with three arguments
        else if(count == 3)
        {
            if(strcmp(command[0],"create") == 0)                    // Create a new flie
            {
                ret = CreateFile(command[1],atoi(command[2])); 

                if(ret >= 0)
                {
                    printf("File is successfully created with flie descriptor : %d\n",ret);
                }
                if(ret == -1)
                {
                    printf("ERROR : Incorrect parameters\n");
                }
                if(ret == -2)
                {
                    printf("ERROR : There is no inodes\n");
                }
                if(ret == -3)
                {
                    printf("ERROR : File already exists\n");
                }
                if(ret == -4)
                {
                    printf("ERROR : Memory allocation failure\n");
                }

                continue;
            }
            else if(strcmp(command[0],"open") == 0)                 // Open an existing file
            {
                ret = OpenFile(command[1],atoi(command[2]));

                if(ret >= 0)
                {
                    printf("File is successfully opened with file descriptor : %d\n",ret);
                }
                if(ret == -1)
                {
                    printf("ERROR : Incorrect parameters\n");
                }
                if(ret == -2)
                {
                    printf("ERROR : File not present\n");
                }
                if(ret == -3)
                {
                    printf("ERROR : Permission denied\n");
                }

                continue;
            }
            else if(strcmp(command[0],"read") == 0)                 // Read data from file
            {
                fd = GetFDFromName(command[1]);

                if(fd == -1)
                {
                    printf("ERROR : Incorrect parameter\n");
                    continue;
                }

                ptr = (char *)malloc(sizeof(atoi(command[2]))+1);

                if(ptr == NULL)
                {
                    printf("ERROR : Memory allocation failure\n");
                    continue;
                }

                ret = ReadFile(fd,ptr,atoi(command[2]));

                if(ret == -1)
                {
                    printf("ERROR : File not existing\n");
                }
                if(ret == -2)
                {
                    printf("ERROR : Permission denied\n");
                }
                if(ret == -3)
                {
                    printf("ERROR : Reached at end of file\n");
                }
                if(ret == -4)
                {
                    printf("ERROR : It is not regular file\n");
                }
                if(ret == 0)
                {
                    printf("ERROR : File empty\n");
                }
                if(ret > 0)
                {
                    write(2,ptr,ret);                               // Output data to standard error (file descriptor 2)
                }

                continue;
            }
            else
            {
                printf("\nERROR : Command not found !!!\n");        // Invalid command
                continue;
            }
        }
        // Handling commands with four arguments
        else if(count == 4)
        {
            if(strcmp(command[0],"lseek") == 0)                     // Change file offset
            {
                fd = GetFDFromName(command[1]);

                if(fd == -1)
                {
                    printf("ERROR : Incorrect parameter\n");
                    continue;
                }

                ret = LseekFile(fd,atoi(command[2]),atoi(command[3]));

                if(ret == -1)
                {
                    printf("ERROR : Unable to perform lseek\n");
                }
            }
            else
            {
                printf("\nERROR : Command nof found !!!\n");        // Invalid command
                continue;
            }
        }
        else
        {
            printf("\nERROR : Command not found !!!\n");            // Invalid command
            continue;
        }
    }
    return 0;
}

/*

    Output:
    Marvellous VFS : > create Demo.txt 3

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Project>g++ CVFS.cpp

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Project>a
    DILB created successfully

    Marvellous VFS : > man create
    Description : Used to create new regular file
    Usage : create File_name Permission

    Marvellous VFS : > create Demo.txt 3
    File is successfully created with flie descriptor : 0     

    Marvellous VFS : > ls

    File Name       Inode number    File size       Link count
    -------------------------------------------------------   
    Demo.txt                1               0               1 
    -------------------------------------------------------   

    Marvellous VFS : > create Hello.txt 3
    File is successfully created with flie descriptor : 1     

    Marvellous VFS : > ls

    File Name       Inode number    File size       Link count
    -------------------------------------------------------   
    Demo.txt                1               0               1 
    Hello.txt               2               0               1 
    -------------------------------------------------------   

    Marvellous VFS : > help
    ls : To list out all files
    clear : To clear console
    open : To open the file
    close : To close the file
    closeall : To close all opened files
    read : To Read the contents from file
    write : To Write contents into file
    exit : To Terminate file system
    stat : To Display information of file using name
    fstat : To Display information of file using file descriptor
    truncate : To Remove all data from file
    rm : To Delet the file

    Marvellous VFS : > man write
    Description : Used to write into regular file
    Usage : write File_name
    After this enter the data that we want to write

    Marvellous VFS : > write Demo.txt
    Enter the data :
    Jay Ganesh...

    Marvellous VFS : > ls

    File Name       Inode number    File size       Link count
    -------------------------------------------------------   
    Demo.txt                1               13              1 
    Hello.txt               2               0               1 
    -------------------------------------------------------   

    Marvellous VFS : > man stat
    Description : Used to display information fo file
    Usage : stat File_name

    Marvellous VFS : > stat Demo.txt

    ----------Statistical Information about file------------  
    File name : Demo.txt
    Inode Number : 1
    File size : 2048
    Actual File size : 13
    Link count : 1
    Reference count : 1
    File Permission : Read & Write
    -----------------------------------------------------------

    Marvellous VFS : > man read
    Description : Used to read data from regular file
    Usage : read File_name No_Of_Bytes_To_Read

    Marvellous VFS : > read Demo.txt 6
    Jay Ga
    Marvellous VFS : > read Demo.txt 2
    ne
    Marvellous VFS : > Demo.txt

    ERROR : Command not found!!!

    Marvellous VFS : > stat Demo.txt

    ----------Statistical Information about file------------  
    File name : Demo.txt
    Inode Number : 1
    File size : 2048
    Actual File size : 13
    Link count : 1
    Reference count : 1
    File Permission : Read & Write
    -----------------------------------------------------------

    Marvellous VFS : > help
    ls : To list out all files
    clear : To clear console
    open : To open the file
    close : To close the file
    closeall : To close all opened files
    read : To Read the contents from file
    write : To Write contents into file
    exit : To Terminate file system
    stat : To Display information of file using name
    fstat : To Display information of file using file descriptor
    truncate : To Remove all data from file
    rm : To Delet the file

    Marvellous VFS : > man truncate
    Description : Uset to remove data from file
    Usage : truncate File_name

    Marvellous VFS : > truncate Demo.txt

    Marvellous VFS : > ls

    File Name       Inode number    File size       Link count
    -------------------------------------------------------   
    Demo.txt                1               0               1 
    Hello.txt               2               0               1 
    -------------------------------------------------------   

    Marvellous VFS : > man rm
    Description : Used to delete the file
    Usage : rm File_Name

    Marvellous VFS : > rm Demo.txt

    Marvellous VFS : > stat Demo.txt

    ----------Statistical Information about file------------  
    File name : Demo.txt
    Inode Number : 1
    File size : 2048
    Actual File size : 0
    Link count : 0
    Reference count : 1
    File Permission : Read & Write
    -----------------------------------------------------------

    Marvellous VFS : > ls

    File Name       Inode number    File size       Link count
    -------------------------------------------------------   
    Hello.txt               2               0               1 
    -------------------------------------------------------   

    Marvellous VFS : > exit
    Terminating the Marvellous Virtual File System

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Project>

*/
//  5. Write a program which accepts file name and one character from user
//     and count number of occurrences of that characters from that file.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

void DisplayChar(char FName[], int iValue)
{
    int fd = 0;
    char Buffer[1024] = {'\0'};
    int iByte = 0, i = 0, iCount = 0;

    fd = open(FName,O_RDONLY);                                  //Open file in read mode

    if(fd == -1)
    {
        printf("Unable to opened file\n");
        exit(0);
    }
    else
    {
        printf("File successfully opened with fd = %d\n",fd);
    }
    
    while((iByte = read(fd,Buffer,sizeof(Buffer))) != 0)        //Read the data into local Bufferay
    {
        for(i = 0; i < iValue; i++)
        {
            printf("%c",Buffer[i]);
        }
    }

    if(iByte == -1)
    {
        perror("Error reading the file");
        close(fd);
        exit(0);
    }

    close(fd);                                                  //Close the file
}

int main()
{
    char FileName[30];
    int iRet = 0;
    int iValue = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    printf("Enter count : ");
    scanf(" %d",&iValue);

    DisplayChar(FileName,iValue);

    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_47>gcc Assignment47_5.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_47>a
    Enter file name : Demo.txt
    Enter count : 14
    File successfully opened with fd = 3
    Display all da

*/
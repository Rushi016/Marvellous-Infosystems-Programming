//  1. Write a program which accepts file name from user and count number of
//     capital character from that file.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int CountCapital(char FName[])
{
    int fd = 0;
    char Buffer[1024] = {'\0'};
    int iByte = 0, i = 0, iCount = 0;

    fd = open(FName,O_RDONLY);                                  //Open file in read mode

    if(fd == -1)
    {
        printf("Unable to opened file\n");
        return -1;
    }
    else
    {
        printf("File successfully opened with fd = %d\n",fd);
    }
    
    while((iByte = read(fd,Buffer,sizeof(Buffer))) != 0)        //Read the data into local Bufferay
    {
        for(i = 0; i < iByte; i++)
        {
            if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
            {
                iCount++;                                       //Count capital characters
            }
        }
    }

    if(iByte == -1)
    {
        perror("Error reading the file");
        close(fd);
        return -1;
    }

    close(fd);                                                  //Close the file

    return iCount;                                              //Return its frequency
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);

    if(iRet != -1)
    {
        printf("Number of Capital Characters are : %d\n",iRet);
    }

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_47>gcc Assignment47_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_47>a
    Enter file name : Demo.txt
    File successfully opened with fd = 3
    Number of Capital Characters are : 3

*/
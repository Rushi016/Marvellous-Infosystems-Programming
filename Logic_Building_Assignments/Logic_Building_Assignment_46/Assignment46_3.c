//  3. Write application which accept file name from user and read all data
//     from that file and display contents on screen.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Buffer[100] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want to read and display contents of that file : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to opened file.\n");
        exit(0);
    }
    else
    {
        printf("File opened successfully with fd : %d\n",fd);
    }

    while(iRet = read(fd,Buffer,sizeof(Buffer)) != 0)
    {
        printf("%s",Buffer);
        memset(Buffer,0,sizeof(Buffer));
    }
    printf("\n");

    close(fd);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_46>gcc Assignment46_3.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_46>a
    Enter the file name that you want to read and display contents of that file : 
    Demo.txt
    File opened successfully with fd : 3
    Display all data of file.

*/
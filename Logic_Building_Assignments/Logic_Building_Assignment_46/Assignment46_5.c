//  5. Write application which accept file name from user and one string
//     from user. Write that string at the end of file.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Arr[100] = {'\0'};
    int iRet = 0, iSum = 0;

    printf("Enter the file name that you want to write the string in that file : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to opened file.\n");
        exit(0);
    }
    else
    {
        printf("File opened successfully with fd : %d\n",fd);
    }

    printf("Enter the data that you want to write\n");
    scanf(" %[^\n]s",Arr);

    write(fd,Arr,strlen(Arr));

    fd = open(FileName,O_RDONLY);

    while(iRet = read(fd,Arr,sizeof(Arr)) != 0)
    {
        printf("%s",Arr);
        memset(Arr,0,sizeof(Arr));
    }
    printf("\n");

    close(fd);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_46>gcc Assignment46_5.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_46>a
    Enter the file name that you want to write the string in that file : 
    Demo.txt
    File opened successfully with fd : 3
    Enter the data that you want to write
    Hello World
    Display all data of file.Hello World

*/
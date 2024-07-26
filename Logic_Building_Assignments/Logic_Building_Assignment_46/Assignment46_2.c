//  2. Write application which accept file name from user and create that file.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char FileName[30];

    printf("Enter the file name that you want to crate : \n");
    scanf("%s",FileName);

    fd = creat(FileName,07777);

    if(fd == -1)
    {
        printf("Unable to create file.\n");
        exit(0);
    }
    else
    {
        printf("File created successfully with fd : %d\n",fd);
    }

    close(fd);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_46>gcc Assignment46_2.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_46>a
    Enter the file name that you want to crate : 
    Demo.txt
    File created successfully with fd : 3

*/
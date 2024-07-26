//  2. Write application which accept file name from user and open that
//     file in read mode.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char FileName[30];

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
        exit(0);
    }
    else
    {
        printf("File opened successfully only for read mode with fd : %d\n",fd);
    }

    close(fd);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_46>gcc Assignment46_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_46>a
    Enter the file name that you want to open : 
    Demo.txt
    File opened successfully only for read mode with fd : 3

*/
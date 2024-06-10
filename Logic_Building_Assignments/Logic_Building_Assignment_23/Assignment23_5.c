//  5. Accept divion of student from user and depends on the division display
//     exam timing. There are 4 divisions in school as A, B, C, D. Exam of
//     division A at 7 AM, B at 8:30 AM, C at 9:20 AM and D at 10:30 AM.
//     (Application should be case insensitive)

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a') {printf("Your exam at 07:00 AM\n");}
    else if(chDiv == 'B' || chDiv == 'b') {printf("Your exam at 08:30 AM\n");}
    else if(chDiv == 'C' || chDiv == 'c') {printf("Your exam at 09:20 AM\n");}
    else if(chDiv == 'D' || chDiv == 'd') {printf("Your exam at 10:30 AM\n");}
    else {printf("There are 4 divisions in school as A, B, C and D\n");}
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>gcc Assignment23_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter your division : 
    C
    Your exam at 09:20 AM

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter your division : 
    d
    Your exam at 10:30 AM

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter your division :
    E
    There are 4 divisions in school as A, B, C and D

*/
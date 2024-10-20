//  4. Write a typescript program which contains one arrow function named as
//     ChkArmstrong. That function accepts one numbers and check whether 
//     number is Armstron number or not.

function ChkArmstrong(No : number) : boolean
{
    var Sum : number = 0;
    var Digit : number = 0;
    var Num : number = 0;
    var iCnt : number = 0;

    Num = No;

    while(Num != 0)
    {
        iCnt++;
        Num = Math.floor(Num / 10);
    }

    Num = No;
    while(Num != 0)
    {
        Digit = Num % 10;
        Sum = Sum + Digit**iCnt;
        Num = Math.floor(Num / 10);
    }

    if(Sum == No)
    {
        return true;
    }
    else
    {
        return false;
    }
}

console.log("Start of application\n");

if(ChkArmstrong(153) == true)
{
    console.log("It is an Armstrong number.");
}
else
{
    console.log("It is not an Armstrong number.");
}

console.log("\nEnd of application");

/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>tsc Assignment2_4.ts  

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>node Assignment2_4.js
    Start of application

    It is an Armstrong number.

    End of application

*/
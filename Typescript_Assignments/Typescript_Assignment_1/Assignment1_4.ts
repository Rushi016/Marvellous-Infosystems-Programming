//  4. Write a typescript program which contains one function named as ChkPrime.
//     That function should accept one number and it should return true if the 
//     given number is prime and otherwise return false.

function ChkPrime(No : number) : number
{
    var i : number = 0;
    var iCnt : number = 0;

    if(No < 0)
    {
        No = -No;
    }

    for(i = 1; i <= No; i++)
    {
        if((No % i) == 0)
        {
            if(iCnt > 2)
            {
                break;
            }

            iCnt++;
        }
    }

    return iCnt;
}

console.log("Start of application\n");

var Result : number = 0;

Result = ChkPrime(11);
if(Result > 2)
{
    console.log("It is not prime number.");
}
else if(Result < 2)
{
    console.log("It is neither prime not composite number.");
}
else
{
    console.log("It is prime number.");
}

console.log("\nEnd of application");

/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_01>tsc Assignment1_4.ts  

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_01>node Assignment1_4.js
    Start of application

    It is prime number.

    End of application

*/

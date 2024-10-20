//  1. Write a typescript program which contains one function named as Maximum.
//     That function accepts three parameters ant it should returns largest
//     value from three input parameters.

function Maximum(No1 : number, No2 : number, No3 : number) : number
{
    if((No1 >= No2) && (No1 >= No3))
    {
        return No1;
    }
    else if((No2 >= No1) && (No2 >= No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

console.log("Start of application\n");
console.log("Maximum number is : " + (Maximum(23,89,6)));
console.log("\nEnd of application");

/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_01>tsc Assignment1_1.ts     

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_01>node Assignment1_1.js   
    Start of application

    Maximum number is : 89

    End of application

*/
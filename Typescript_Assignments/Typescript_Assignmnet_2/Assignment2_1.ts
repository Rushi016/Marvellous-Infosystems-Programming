//  1. Write a typescript program which contains one function named as Maximum.
//     That function accepts an array of numbers and returns the largest number
//     from array.

function Maximum(...Brr : number[]) : number
{
    var Max : number = 0;
    var i : number = 0;

    Max = Brr[0];

    for(i = 0; i < Brr.length; i++)
    {
        if(Max < Brr[i])
        {
            Max = Brr[i];
        }
    }

    return Max;
}

console.log("Start of application\n");
console.log("Maximum number is : " + (Maximum(23,89,6,29,56,45,77,32)));
console.log("\nEnd of application");

/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>tsc Assignment2_1.ts  

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>node Assignment2_1.js
    Start of application

    Maximum number is : 89

    End of application

*/
//  3. Write a typescript program which contains one function named as Maximum.
//     That function accept array of numbers and returns the second largest
//     numbmer from array.

function Maximum(...Brr : number[]) : number
{
    var Max : number = 0;
    var SecMax : number = -1;

    var i : number = 0;

    Max = Brr[0];

    for(i = 0; i < Brr.length; i++)
    {
        if(Max < Brr[i])
        {
            Max = Brr[i];
        }
    }

    for(i = 0; i < Brr.length; i++)
    {
        if((Brr[i] < Max) && (Brr[i] > SecMax))
        {
            SecMax = Brr[i];
        }
    }

    return SecMax;
}

console.log("Start of application\n");
console.log("Second Maximum number is : " + Maximum(23,89,6,29,56,45,77,32));
console.log("\nEnd of application");

/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>tsc Assignment2_3.ts  

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>node Assignment2_3.js
    Start of application

    Second Maximum number is : 77

    End of application

*/
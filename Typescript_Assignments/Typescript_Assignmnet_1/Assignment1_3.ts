//  3. Write a typescript program which contains one function named as 
//     DisplayFactors. That function should accept one number and display
//     factors of that number.

function DisplayFactors(No : number) : string
{
    var i : number = 0;
    var fact : string = '\0';

    for(i = 1; i <= No/2; i++)
    {
        if((No % i) == 0)
        {
            fact = fact + i + "\t";
        }
    }

    return fact.trim();
}

console.log("Start of application\n");
console.log(DisplayFactors(20));
console.log("\nEnd of application");

/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_01>tsc Assignment1_3.ts  

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_01>node Assignment1_3.js 
    Start of application

    1       2       4       5       10

    End of application

*/
//  5. Write a typescript program which contains one function names as Fibonacci.
//     That function accept one number from user and print Fibonacci series till
//     that number.

function Fibonacci(No : number) : string
{
    var a : number = 0;
    var b : number = 1;
    var sum : number = 0;
    var i : number = 0;

    var Fibonacci : string = '\0';
    Fibonacci = Fibonacci + a + "\t" + b + "\t";

    for(i = 1; i <= No; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    
        if(sum > No)
        {
            break;
        }

        Fibonacci = Fibonacci + sum + "\t";
    }

    return Fibonacci;
}

console.log("Start of application\n");
console.log(Fibonacci(21));
console.log("\nEnd of application");

/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_01>tsc Assignment1_5.ts  

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_01>node Assignment1_5.js
    Start of application

    0       1       1       2       3       5       8       13      21

    End of application

*/
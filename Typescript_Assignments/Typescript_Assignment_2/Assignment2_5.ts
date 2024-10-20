//  5. Write a typescript program which contains one function named as ChkString.
//     That function accept one string and check whether that string contains
//     "Marvellous" word or not.

function ChkString(Str: string): boolean 
{
    var Word: string = "Marvellous";
    var i: number = 0;
    var j: number = 0;
    var WordLen: number = Word.length;
    var StrLen: number = Str.length;

    while (i <= StrLen - WordLen) 
    {
        for (j = 0; j < WordLen; j++) 
        {
            if (Str[i + j] !== Word[j]) 
            {
                break; 
            }
        }

        if (j === WordLen) 
        {
            return true;
        }

        i++;
    }

    return false; 
}

console.log("Start of application\n");

if(ChkString("Pune Kothrud Marvellous Infosystems") == true)
{
    console.log("String contains Marvellous in it.");
}
else
{
    console.log("String does not contains Marvellous in it.");
}

console.log("\nEnd of application");

/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>tsc Assignment2_5.ts  

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>node Assignment2_5.js
    Start of application

    String contains Marvellous in it.

    End of application

*/
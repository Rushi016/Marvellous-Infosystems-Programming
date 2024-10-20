//  2. Write a typescript program which contains one function named as Area.
//     That function shuld calculate area of circle. Accept value of radius
//     from user and return its area. Defalut value of PI should be 3.14 if 
//     if not provided by the caller.

function Area(Rad : number, PI : number = 3.14) : number
{
    return PI * Rad**2;
}

console.log("Start of application\n");
console.log("Area of circle is : " + Area(5));
console.log("\nEnd of application");

/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_01>node Assignment1_2.js
    Start of application

    Area of circle is : 78.5

    End of application

*/
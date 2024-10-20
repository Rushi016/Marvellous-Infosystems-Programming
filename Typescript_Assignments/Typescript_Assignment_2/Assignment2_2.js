//  2. Write a typescript program which contains one function named as Summation.
//     That function accepts array of numbers and returns the summation of each 
//     number from array.
function Summation(Brr) {
    var i = 0;
    var Digit = 0;
    var Sum = 0;
    var ArrSum = 0;
    var Num = 0;
    for (i = 0; i < Brr.length; i++) {
        ArrSum = ArrSum + Brr[i];
    }
    for (i = 0; i < Brr.length; i++) {
        Sum = 0;
        Num = Brr[i];
        while (Num != 0) {
            Digit = Num % 10;
            Sum = Sum + Digit;
            Num = Math.floor(Num / 10);
        }
        Brr[i] = Sum;
    }
    return { ArrSum: ArrSum, Brr: Brr };
}
console.log("Start of application\n");
var Arr = [23, 64, 75, 46, 51, 78];
console.log("Sum of digits of each number and Sum of Array Numbers : ");
console.log(Summation(Arr));
console.log("\nEnd of application");
/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>tsc Assignment2_2.ts

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Angular_Assignments\Typescript_Assignmnet_02>node Assignment2_2.js
    Start of application

    Sum of digits of each number and Sum of Array Numbers :
    { ArrSum: 337, Brr: [ 5, 10, 12, 10, 6, 15 ] }

    End of application

*/ 

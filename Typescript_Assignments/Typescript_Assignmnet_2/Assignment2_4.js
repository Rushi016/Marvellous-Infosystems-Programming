//  4. Write a typescript program which contains one arrow function named as
//     ChkArmstrong. That function accepts one numbers and check whether 
//     number is Armstron number or not.
function ChkArmstrong(No) {
    var Sum = 0;
    var Digit = 0;
    var Num = 0;
    var iCnt = 0;
    Num = No;
    while (Num != 0) {
        iCnt++;
        Num = Math.floor(Num / 10);
    }
    Num = No;
    while (Num != 0) {
        Digit = Num % 10;
        Sum = Sum + Math.pow(Digit, iCnt);
        Num = Math.floor(Num / 10);
    }
    if (Sum == No) {
        return true;
    }
    else {
        return false;
    }
}
console.log("Start of application\n");
if (ChkArmstrong(153) == true) {
    console.log("It is an Armstrong number.");
}
else {
    console.log("It is not an Armstrong number.");
}
console.log("\nEnd of application");
/*

Output:


*/ 

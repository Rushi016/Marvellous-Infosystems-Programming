//  4. Write a typescript program which contains one function named as ChkPrime.
//     That function should accept one number and it should return true if the 
//     given number is prime and otherwise return false.
function ChkPrime(No) {
    var i = 0;
    var iCnt = 0;
    if (No < 0) {
        No = -No;
    }
    for (i = 1; i <= No; i++) {
        if ((No % i) == 0) {
            if (iCnt > 2) {
                break;
            }
            iCnt++;
        }
    }
    return iCnt;
}
console.log("Start of application\n");
var Result = 0;
Result = ChkPrime(11);
if (Result > 2) {
    console.log("It is not prime number.");
}
else if (Result < 2) {
    console.log("It is neither prime not composite number.");
}
else {
    console.log("It is prime number.");
}
console.log("\nEnd of application");
/*

Output:


*/

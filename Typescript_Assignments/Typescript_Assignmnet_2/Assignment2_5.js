//  5. Write a typescript program which contains one function named as ChkString.
//     That function accept one string and check whether that string contains
//     "Marvellous" word or not.
function ChkString(Str) {
    var Word = "Marvellous";
    var i = 0;
    var j = 0;
    var WordLen = Word.length;
    var StrLen = Str.length;
    while (i <= StrLen - WordLen) {
        for (j = 0; j < WordLen; j++) {
            if (Str[i + j] !== Word[j]) {
                break;
            }
        }
        if (j === WordLen) {
            return true;
        }
        i++;
    }
    return false;
}
console.log("Start of application\n");
if (ChkString("Pune Kothrud Marvellous Infosystems") == true) {
    console.log("String contains Marvellous in it.");
}
else {
    console.log("String does not contains Marvellous in it.");
}
console.log("\nEnd of application");
/*

Output:


*/ 

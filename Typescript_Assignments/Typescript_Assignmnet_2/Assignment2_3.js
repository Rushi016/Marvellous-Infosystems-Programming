//  3. Write a typescript program which contains one function named as Maximum.
//     That function accept array of numbers and returns the second largest
//     numbmer from array.
function Maximum() {
    var Brr = [];
    for (var _i = 0; _i < arguments.length; _i++) {
        Brr[_i] = arguments[_i];
    }
    var Max = 0;
    var SecMax = -1;
    var i = 0;
    Max = Brr[0];
    for (i = 0; i < Brr.length; i++) {
        if (Max < Brr[i]) {
            Max = Brr[i];
        }
    }
    for (i = 0; i < Brr.length; i++) {
        if ((Brr[i] < Max) && (Brr[i] > SecMax)) {
            SecMax = Brr[i];
        }
    }
    return SecMax;
}
console.log("Start of application\n");
console.log("Second Maximum number is : " + Maximum(23, 89, 6, 29, 56, 45, 77, 32));
console.log("\nEnd of application");

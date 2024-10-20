//  2. Write a typescript program which contains one function named as Area.
//     That function shuld calculate area of circle. Accept value of radius
//     from user and return its area. Defalut value of PI should be 3.14 if 
//     if not provided by the caller.
function Area(Rad, PI) {
    if (PI === void 0) { PI = 3.14; }
    return PI * Math.pow(Rad, 2);
}
console.log("Start of application\n");
console.log("Area of circle is : " + Area(5));
console.log("\nEnd of application");

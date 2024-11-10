//  2. Create one typescript application which contains one class named as Circle.
//     Circle class contains two characteristics (Class data members) as Radius, PI.
//     Create one parametrised constructor which accept one value and assign it to Radius.
//     Value of PI member is set 3.14.
//     In Circle class we have to one method (Behaviours) as Area which will return area of Circle.
//     After designing the class create two objects of that class by providing some hardcoded value.
//     Call the method Area by using both the objects.
var Circle = /** @class */ (function () {
    function Circle(Value) {
        this.Radius = 0;
        this.PI = 0;
        this.Radius = Value;
        this.PI = 3.14;
    }
    Circle.prototype.Area = function () {
        return this.PI * Math.pow(this.Radius, 2);
    };
    return Circle;
}());
var Obj1 = new Circle(3);
console.log("Area of circle is : " + Obj1.Area());
console.log();
var Obj2 = new Circle(2);
console.log("Area of circle is : " + Obj2.Area());
/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Typescript_Assignments\Typescript_Assignment_3>tsc Assignment3_2.ts

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Typescript_Assignments\Typescript_Assignment_3>node Assignment3_2.js
    Area of circle is : 28.26

    Area of circle is : 12.56

*/ 

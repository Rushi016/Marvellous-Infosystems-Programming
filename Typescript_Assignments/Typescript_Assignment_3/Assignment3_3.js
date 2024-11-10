//  3. Create one typescript application which contains one class named as CircleX which
//     is inherits above Circle class.
//     In CircleX class we have to write one method (Behaviours) as Circumference which
//     will return circumference of circle.
//     After designing the class create two objects of that class by providing some hardcoded
//     value.
//     Call Circumference and Area methods by using both the objects.
var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
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
var CircleX = /** @class */ (function (_super) {
    __extends(CircleX, _super);
    function CircleX() {
        return _super !== null && _super.apply(this, arguments) || this;
    }
    CircleX.prototype.Circumference = function () {
        return 2 * this.PI * this.Radius;
    };
    return CircleX;
}(Circle));
var Obj1 = new CircleX(3);
console.log("Area of circle is : " + Obj1.Area());
console.log("Circumference of circle is : " + Obj1.Circumference());
console.log();
var Obj2 = new CircleX(2);
console.log("Area of circle is : " + Obj2.Area());
console.log("Circumference of circle is : " + Obj2.Circumference());
/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Typescript_Assignments\Typescript_Assignment_3>tsc Assignment3_3.ts

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Typescript_Assignments\Typescript_Assignment_3>node Assignment3_3.js
    Area of circle is : 28.26
    Circumference of circle is : 18.84

    Area of circle is : 12.56
    Circumference of circle is : 12.56

*/ 

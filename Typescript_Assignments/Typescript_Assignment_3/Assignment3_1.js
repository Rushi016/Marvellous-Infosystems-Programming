//  1. Create one typescript application which contains one class named as Arithmetic.
//     Arithmetic class contains three characteristics (Class data members) as Number1, Number2.
//     Create one paratmetrised constructor which accept two values and assign it to Number1 and
//     Number2.
//     In Arithmetic class we have to write four methods (Behaviours) as Addition, Substraction,
//     Multiplication and Division.
//     Addition method will add Number1, Number2 and return result.
//     Substraction method will substract Number1, Number2 and return result.
//     Multiplication method will multiply Number1, Number2 and return result.
//     Division method will divide Number1, Number2 and return result.
//     After designing the class create two objects of that class by providing some hardcoded value.
//     Call all the methods by using both the objects.
var Arithmetic = /** @class */ (function () {
    function Arithmetic(Value1, Value2) {
        this.Number1 = 0;
        this.Number2 = 0;
        this.Number3 = 0;
        this.Number1 = Value1;
        this.Number2 = Value2;
    }
    Arithmetic.prototype.Addition = function () {
        var Result = 0;
        Result = this.Number1 + this.Number2;
        return Result;
    };
    Arithmetic.prototype.Substraction = function () {
        var Result = 0;
        Result = this.Number1 - this.Number2;
        return Result;
    };
    Arithmetic.prototype.Multiplication = function () {
        var Result = 0;
        Result = this.Number1 * this.Number2;
        return Result;
    };
    Arithmetic.prototype.Division = function () {
        var Result = 0;
        Result = this.Number1 / this.Number2;
        return Result;
    };
    return Arithmetic;
}());
var obj1 = new Arithmetic(10, 11);
console.log("Addition is : " + obj1.Addition());
console.log("Substraction is : " + obj1.Substraction());
console.log("Multiplication is : " + obj1.Multiplication());
console.log("Division is : " + obj1.Division());
console.log();
var obj2 = new Arithmetic(20, 0);
console.log("Addition is : " + obj2.Addition());
console.log("Substraction is : " + obj2.Substraction());
console.log("Multiplication is : " + obj2.Multiplication());
console.log("Division is : " + obj2.Division());
/*

    Output:
    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Typescript_Assignments\Typescript_Assignment_3>tsc Assignment3_1.ts

    D:\Marvellous_Infosystems\Angular_with_MEAN_FullStack\Typescript_Assignments\Typescript_Assignment_3>node Assignment3_1.js
    Addition is : 21
    Substraction is : -1
    Multiplication is : 110
    Division is : 0.9090909090909091

    Addition is : 20
    Substraction is : 20
    Multiplication is : 0
    Division is : Infinity

*/ 

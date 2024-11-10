//  3. Create one typescript application which contains one class named as CircleX which
//     is inherits above Circle class.
//     In CircleX class we have to write one method (Behaviours) as Circumference which
//     will return circumference of circle.
//     After designing the class create two objects of that class by providing some hardcoded
//     value.
//     Call Circumference and Area methods by using both the objects.

class Circle
{
    public Radius : number = 0;
    public PI : number = 0;

    public constructor(Value : number)
    {
        this.Radius = Value;
        this.PI = 3.14;
    }

    public Area() : number
    {
        return this.PI * this.Radius**2;
    }
}

class CircleX extends Circle
{
    public Circumference() : number
    {
        return 2 * this.PI * this.Radius;
    }
}

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
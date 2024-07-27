//  3. Write a program which accept matrix and Reverse the contents of each
//     column.

import java.util.*;

class Matrix
{
    public int iRow, iCol;
    public int Arr[][];

    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int [iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Matrix Elements : ");

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void ReverseCol()
    {
        System.out.println("Reverse each column of the Matrix : ");

        int temp = 0;

        for(int j = 0; j < iCol; j++)
        {
            for(int i = 0,Row = iRow-1; Row >= i; i++,Row--)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[Row][j];
                Arr[Row][j] = temp;
            }
        }
    }
}

class Main
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iNo2 = sobj.nextInt();

        Matrix mobj = new Matrix(iNo1,iNo2);

        mobj.Accept();
        System.out.println("Elements of the Matrix are : ");
        mobj.Display();

        mobj.ReverseCol();
        mobj.Display();
    }
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_49>javac Assignment49_3.java

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_49>java Main
    Enter number of rows : 
    4
    Enter number of columns : 
    4
    Enter Matrix Elements : 
    3
    2
    5
    9
    4
    3
    2
    2
    8
    4
    1
    9
    3
    9
    7
    5
    Elements of the Matrix are :
    3       2       5       9
    4       3       2       2
    8       4       1       9
    3       9       7       5
    Reverse each column of the Matrix :
    3       9       7       5
    8       4       1       9
    4       3       2       2
    3       2       5       9

*/
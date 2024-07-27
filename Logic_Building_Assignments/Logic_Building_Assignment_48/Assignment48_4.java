//  4. Write a program which accept matrix and display addition of elements
//     From each column.

import java.util.*;

class Matrix
{
    public int iRow, iCol;
    public int Arr[][];

    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the data : ");

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
        Scanner sobj = new Scanner(System.in);

        System.out.println("Elements of the Matrix are : ");

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void AddColumn()
    {
        int iSum = 0;

        for(int j = 0; j < iCol; j++)
        {
            for(int i = 0; i < iRow; i++)
            {
                iSum = iSum + Arr[i][j];
            }

            System.out.println("Column '"+j+"' Sum is "+iSum);
            iSum = 0;
        }
    }
}

class Main
{
    public static void main(String args[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iNo2 = sobj.nextInt();

        Matrix mobj = new Matrix(iNo1,iNo2);

        mobj.Accept();
        mobj.Display();

        mobj.AddColumn();
    }
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_48>javac Assignment48_4.java

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_48>java Main                 
    Enter number of rows : 
    4
    Enter number of columns : 
    4
    Please enter the data : 
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
    Column '0' Sum is 18
    Column '1' Sum is 18
    Column '2' Sum is 15
    Column '3' Sum is 25    

*/
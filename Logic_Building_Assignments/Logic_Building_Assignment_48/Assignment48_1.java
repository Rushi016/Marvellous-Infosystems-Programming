//  1. Write a program which accept matrix from user and return addition of
//     diagonal elements.

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

    public int AddDiagonal()
    {
        if(iRow != iCol)
        {
            return -1;
        }

        int iSum = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
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

        iRet = mobj.AddDiagonal();
        if(iRet == -1)
        {
            System.out.println("This is not square matrix");
        }
        else
        {
            System.out.println("Additon of diagonal elemets is : "+iRet);
        }
    }
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_48>javac Assignment48_1.java

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
    5
    3
    9
    7
    5
    Elements of the Matrix are :
    3       2       5       9
    4       3       2       2
    8       4       1       5
    3       9       7       5
    Additon of diagonal elemets is : 12

*/
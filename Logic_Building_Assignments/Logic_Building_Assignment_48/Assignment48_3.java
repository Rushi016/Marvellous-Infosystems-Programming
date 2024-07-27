//  3. Write a program which accept matrix and return largest number from
//     both the diagonals.

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

    public int MaxDiagonal()
    {
        if(iRow != iCol)
        {
            return -1;
        }

        int iMax1 = Arr[0][0];
        int iMax2 = Arr[0][iCol-1];

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if((i == j) && (Arr[i][j] > iMax1))
                {
                    iMax1 = Arr[i][j];
                }
            }
        }

        for(int i = 0, j = iCol - 1; j <= 0; i++,j--)
        {
            if(Arr[i][j] > iMax2)
            {
                iMax2 = Arr[i][j];
            }
        }

        if(iMax1 > iMax2)
        {
            return iMax1;
        }
        else
        {
            return iMax2;
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

        iRet = mobj.MaxDiagonal();
        if(iRet == -1)
        {
            System.out.println("This is not square matrix");
        }
        else
        {
            System.out.println("Lagest number from the both the diagonals is : "+iRet);
        }
    }
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_48>javac Assignment48_3.java

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
    Lagest number from the both the diagonals is : 9

*/
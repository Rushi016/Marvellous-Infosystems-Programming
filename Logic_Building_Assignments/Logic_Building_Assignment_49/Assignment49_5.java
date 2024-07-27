//  5. Write a program which accept matrix and check whether the matrix is
//     Sparse matrix or not. (Sparse matrix is a matrix with the majority
//     of its elements equal to zero.)

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

    public boolean ChkSparse()
    {
        int ZeroCnt = 0;
        int NonZeroCnt = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == 0)
                {
                    ZeroCnt++;
                }
                else
                {
                    NonZeroCnt++;
                }
            }
        }

        if((NonZeroCnt >= ZeroCnt))
        {
            return false;
        }
        else
        {
            return true;
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

        boolean bRet = mobj.ChkSparse();
        if(bRet == false)
        {
            System.out.println("It is NOT Sparse Matrix");
        }
        else
        {
            System.out.println("It is Sparse Matrix");
        }
    }
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_49>javac Assignment49_5.java

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_49>java Main
    Enter number of rows : 
    4
    Enter number of columns : 
    4
    Enter Matrix Elements : 
    1
    0
    3
    0
    0
    6
    0
    0
    0
    0
    1
    0
    9
    0
    0
    9
    Elements of the Matrix are :
    1       0       3       0
    0       6       0       0
    0       0       1       0
    9       0       0       9
    It is Sparse Matrix

*/
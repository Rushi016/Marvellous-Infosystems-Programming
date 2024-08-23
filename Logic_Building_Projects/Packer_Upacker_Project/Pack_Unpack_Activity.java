import java.util.*;
import java.io.*;

class PackingUnpacking
{
    private Scanner sobj;
    private FileOutputStream foobj;
    private String Header;
    private int iRet, FileSize, iCount;

    public PackingUnpacking()
    {
        System.out.println("-----------------------------------------------------");
        System.out.println("------- Marvellous Packer Unpacker CUI Module -------");
        System.out.println("-----------------------------------------------------");

        sobj = new Scanner(System.in);
        iRet = 0;
        FileSize = 0;
        iCount = 0;
        Header = null;
    }

    public void PackingActivity()
    {
        System.out.println("----------------- Packing Activity ------------------");
        System.out.println();

        System.out.println("Enter the name of Directory that you want to open for packing : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        System.out.println("Enter the name of packed file that you want to create : ");
        String PackedFile = sobj.nextLine();

        File Packobj = new File(PackedFile);

        try
        {
            boolean bret = Packobj.createNewFile();
            if(!bret)
            {
                System.out.println("Unable to create packed file");
                return;
            }

            foobj = new FileOutputStream(Packobj);

            if(fobj.exists() && fobj.isDirectory())
            {
                File[] Arr = fobj.listFiles();

                byte[] Buffer = new byte[1024];

                for (File file : Arr)
                {
                    Header = file.getName();

                    if (Header.endsWith(".txt"))
                    {
                        System.out.println("File packed with name : " + Header);

                        Header = Header + " " + file.length();

                        for(int j = Header.length(); j < 100; j++)
                        {
                            Header = Header + " ";
                        }

                        foobj.write(Header.getBytes(), 0, 100);

                        try (FileInputStream fiobj = new FileInputStream(file))
                        {
                            while((iRet = fiobj.read(Buffer)) != -1)
                            {
                                foobj.write(Buffer, 0, iRet);
                            }
                        }

                        iCount++;
                    }
                }

                System.out.println("-----------------------------------------------------");
                System.out.println("Packing activity completed..");
                System.out.println("Number of files scanned : " + Arr.length);
                System.out.println("Number of files packed : " + iCount);
                System.out.println("-----------------------------------------------------");
                System.out.println("Thank you for using Marvellous Packer Unpacker tool");
            } 
            else
            {
                System.out.println("There is no such directory");
            }

            foobj.close();
        }
        catch(IOException e)
        {
            e.printStackTrace();
        }
    }

    public void UnpackingActivity()
    {
        System.out.println("---------------- Unpacking Activity -----------------");
        System.out.println();

        System.out.println("Enter the name of Packed file that you want to open : ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);

        if(!fobj.exists())
        {
            System.out.println("Unable to proceed as Packed file is missing...");
            return;
        }

        try(FileInputStream fiobj = new FileInputStream(fobj))
        {
            byte[] Header = new byte[100];

            while((iRet = fiobj.read(Header, 0, 100)) > 0)
            {
                String HeaderX = new String(Header).trim();

                String[] Tokens = HeaderX.split(" ");

                File obj = new File(Tokens[0]);
                System.out.println("File drop with name : " + Tokens[0]);

                obj.createNewFile();

                FileSize = Integer.parseInt(Tokens[1]);
                byte[] Buffer = new byte[FileSize];

                fiobj.read(Buffer, 0, FileSize);

                try(FileOutputStream foobj = new FileOutputStream(obj))
                {
                    foobj.write(Buffer, 0, FileSize);
                }

                iCount++;
            }

            System.out.println("-----------------------------------------------------");
            System.out.println("Unpacking activity completed..");
            System.out.println("Number of files unpacked : " + iCount);
            System.out.println("-----------------------------------------------------");
            System.out.println("Thank you for using Marvellous Packer Unpacker tool");
        }
        catch(IOException e)
        {
            e.printStackTrace();
        }
    }
}

class PackerUnpackerProject
{
    public static void main(String[] Arg)
    {
        PackingUnpacking pobj = new PackingUnpacking();

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter 0 for packing activity");
        System.out.println("Enter 1 for unpacking activity");
        int choice = sobj.nextInt();

        switch(choice)
        {
            case 0:
                pobj.PackingActivity();
                break;

            case 1:
                pobj.UnpackingActivity();
                break;

            default:
                System.out.println("Invalid choice");
        }

        sobj.close();
    }
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Project\Packer_Upacker_Project>javac Pack_Unpack_Activity.java 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Project\Packer_Upacker_Project>java PackerUnpackerProject  
    -----------------------------------------------------
    ------- Marvellous Packer Unpacker CUI Module -------
    -----------------------------------------------------
    Enter 0 for packing activity
    Enter 1 for unpacking activity
    0
    ----------------- Packing Activity ------------------

    Enter the name of Directory that you want to open for packing :
    Marvellous 
    Enter the name of packed file that you want to create :
    LBpack.txt
    File packed with name : Demo.txt
    File packed with name : Hello.txt
    File packed with name : PPA.txt
    -----------------------------------------------------
    Packing activity completed..
    Number of files scanned : 4
    Number of files packed : 3
    -----------------------------------------------------
    Thank you for using Marvellous Packer Unpacker tool

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Project\Packer_Upacker_Project>java PackerUnpackerProject
    -----------------------------------------------------
    ------- Marvellous Packer Unpacker CUI Module -------
    -----------------------------------------------------
    Enter 0 for packing activity
    Enter 1 for unpacking activity
    1
    ---------------- Unpacking Activity -----------------

    Enter the name of Packed file that you want to open :
    LBpack.txt
    File drop with name : Demo.txt
    File drop with name : Hello.txt
    File drop with name : PPA.txt
    -----------------------------------------------------
    Unpacking activity completed..
    Number of files unpacked : 3
    -----------------------------------------------------
    Thank you for using Marvellous Packer Unpacker tool

*/
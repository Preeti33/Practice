import java.lang.*;
import java.util.*;

class pro136
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bret = bobj.CheckBit(value);

        if(bret == true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }
    } 

}

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 0X00100000;     //1048576//21bit
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
   
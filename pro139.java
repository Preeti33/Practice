import java.lang.*;
import java.util.*;

class pro139
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iret = bobj.OnBit(value);

        System.out.println("Updated number is : "+iret);

    } 

}

class Bitwise
{
    public int OnBit(int iNo)
    {
        int iMask = 0X04000000;     
        int iResult = 0;

        iResult = iNo | iMask;
        return iResult;
    }
}
   
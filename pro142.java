import java.lang.*;
import java.util.*;

class pro142
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number");
        int value = sobj.nextInt();

        System.out.println("Enter the position");
        int pos = sobj.nextInt();


        Bitwise bobj = new Bitwise();
        int iret = bobj.ToggleBit(value , pos);

        System.out.println("Updated number is : "+iret);

    } 

}

class Bitwise
{
    public int ToggleBit(int iNo , int iPos)
    {
        if((iPos <= 0) || (iPos > 32))
        {
            System.out.println("Invalid Position");
            return 0;
        }
        int iMask = 0X00000001;  
        int iResult = 0;

        iMask = iMask << (iPos-1);

        iResult = iNo ^ iMask;
        return iResult;
    }
}
   
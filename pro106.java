import java.lang.*;
import java.util.*;

class pro106
{
    public static void main(String a[])
    {
        Number nobj = new Number();
        int iRet = 0;
        
        nobj.Accept();
        nobj.Display();
        
        iRet = nobj.Factorial();
        System.out.println("Factorial is : "+iRet);
    }
}

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is : "+this.iNo);
    }

    public int Factorial()
    {
        int iFact = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            //iFact = iFact * iCnt;
            iFact *= iCnt;
        }
        return iFact;
    }
}
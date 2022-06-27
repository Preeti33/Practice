import java.util.*;

import java.util.*;

class Pattern
{
    private int iRow, iCol;

    public Pattern(int a, int b)
    {
        iRow = a;
        iCol = b;
    }

    public void DisplayPattern()
    {
        int i = 0; 
        int j = 0;

        for(i=1; i<=iRow; i++)
        {
            for(j = 1; j<=iCol; j++)
            {
                System.out.println();
            }
        }
    }
}


//Accept number form user and display its factorsSum
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    for(iCnt = 1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
          printf("%d,", iCnt);  
          iSum = iSum + iCnt;
        }
        if(iSum > iNo)
        {
            break;
        }
    }
    
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iNumber = 0;
    bool bRet = 0;

    printf("Enter number\n");
    scanf("%d", &iNumber);

    bRet = CheckPerfect(iNumber);
    if(bRet == true)
    {
        printf("%d is a prefect number\n", iNumber);
    }
    else
    {
        printf("%d is a not a perfect number\n",iNumber);
    }
    return 0;
}

//Time Complexity : O(N/2)

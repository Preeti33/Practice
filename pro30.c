#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
    int iCnt = 0;
    int iFactCnt = 0;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)// iCnt = 2;
    {
        if(iNo % iCnt == 0)
        {
            iFactCnt++;
        }
        return iFactCnt;

    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = CountFactor(iValue);

    printf("Number of factor are : %d\n",iRet);
    return 0;
}
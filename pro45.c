#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)
{
    int iMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}

bool chkArmstrong(int iNo)
{
    int iTemp = 0;
    int iDigitCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iTemp = iNo;

    while (iNo != 0)
    {
        iDigitCnt++;
        iNo = iNo / 10;
    }
    
    iNo = iTemp;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit,iDigitCnt);
        iNo = iNo / 10;
    }
    
    if(iSum == iTemp)
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
    int iValue = 0;
    bool bRet;

    printf("Enter First number : \n");
    scanf("%d",&iValue);

    bRet = chkArmstrong(iValue);

    if(bRet == true)
    {
        printf("%d is Armstrong number is\n", iValue);
    }
    else
    {
        printf("%d is not Armstrong number is\n", iValue);
    }
    return 0;
}
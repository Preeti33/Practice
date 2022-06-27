//Input = 2 4
//Output = 16 (2*2*2*2)

#include<stdio.h>
unsigned long int Power(int iNo1, int iNo2)
{
    unsigned long int lMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        lMult = lMult * iNo1;
    }
    return lMult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    auto unsigned long int lRet = 0;

    printf("Enter base number : \n");
    scanf("%d",&iValue1);

    printf("Enter power number : \n");
    scanf("%d", &iValue2);

    lRet = Power(iValue1, iValue2);

    printf("Result of number is : %ld\n", lRet);
    
    return 0;
}

//4
//4 * 3 * 2 *1 = 24
#include<stdio.h>

int Factorial(int iNo)
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
int main()
{
    int ivalue = 0; 
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    iRet = Factorial(ivalue);

    printf("Factorial is : %d\n", iRet);

    return 0;
}
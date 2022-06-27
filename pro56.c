#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iLength)
{
    int iSum = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iSize = 0; int iCnt = 0; int iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elemnt\n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(sizeof(int)* iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Summation(ptr, iSize);
    printf("Summation of number is : %d\n", iRet);

    free(ptr);
    return 0;
}
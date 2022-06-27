//Array

#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[], int iLength)
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
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0; 
    int iRet = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the value of array\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Sumation(ptr, iSize);

    printf("Additon is : %d\n",iRet);
    return 0;

}

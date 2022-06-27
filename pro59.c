#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize = 0; int iCnt = 0; int iRet = 0; int iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elemnt\n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(sizeof(int)* iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to calculate the frequency \n");
    scanf("%d", &iValue);

    iRet = Frequency(ptr,iSize,iValue);
    printf("Frequency is : %d\n", iRet);
    
    free(ptr);
    
    return 0;
}
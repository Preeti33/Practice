#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool SearchlastOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
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

    printf("Enter the element to the Search number \n");
    scanf("%d", &iValue);

    iRet = SearchlastOccurance(ptr,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such element in array\n");
    }
    else
    {
        printf("Element last occurred at array : %d\n", iRet);
    }
   
    free(ptr);
    
    return 0;
}
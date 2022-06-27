//accept n number and display even number.
#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
    int iCnt = 0;
    printf("Even elements are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }    
}

int main()
{
    int iSize = 0; int iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of element : \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the value of array : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    DisplayEven(ptr, iSize);
    free(ptr);
    return 0;
}

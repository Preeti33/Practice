#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //     1        2        3
    for(iCnt = 0; iCnt<iNo; ++iCnt)
    {
        printf("Hello\n"); //4
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    return 0;
}
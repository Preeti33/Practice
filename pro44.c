//Input = 2 4
//Output = 16 (2*2*2*2)

#include"header44.h"

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    auto ULONG lRet = 0;

    printf("Enter base number : \n");
    scanf("%d",&iValue1);

    printf("Enter power number : \n");
    scanf("%d",&iValue2);

    lRet = Power(iValue1, iValue2);

    printf("Result of number is : %ld\n", lRet);
    
    return 0;
}
//4
//4 * 3 * 2 * 1 = 24
//1 * 2 * 3 * 4 = 24
#include<iostream>
using namespace std;

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

    cout<<"Enter number\n";
    cin>>&ivalue;

    iRet = Factorial(ivalue);

    cout<<"Factorial is : "<<iRet<<endl;

    return 0;
}
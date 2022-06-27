#include<iostream>
using namespace std;

void strlwrX(char str[]) //*str
{
    int iCnt = 0;

   while (*str != '\0')
   {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
           *str = *str + 32;
        }
        str++;
   }
}
 
int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);

    strlwrX(Arr);
    cout<<"String in lower case : "<<Arr<<endl;
    
    return 0;
}

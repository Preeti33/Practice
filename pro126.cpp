#include <iostream>
using namespace std;

void strtoggleX(char str[]) //*str
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A')&&(*str <= 'Z'))
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

    cout << "Enter String" << endl;
    cin.getline(Arr, 20);

    strtoggleX(Arr);
    cout << "String after toggle case : " << Arr << endl;

    return 0;
}
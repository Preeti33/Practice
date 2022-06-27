#include<iostream>
using namespace std;

void strrevX(char *str) //*str
{
   char *start = str;
   char *end = str;
   char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter String" << endl;
    cin.getline(Arr, 20);

    strrevX(Arr);
    cout << "String after revserse : " << Arr << endl;

    return 0;
}

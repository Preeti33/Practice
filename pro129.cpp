#include<iostream>
using namespace std;

void strcatX(char *src, char *dest) //*str
{
    while (*dest != '\0')
    {
        dest++;
    }
    
   while (*src != '\0')
    {
       *dest = *src;
       src++;
       dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout <<"Enter First String"<<endl;
    cin.getline(Arr,20);

    cout <<"Enter Second String"<<endl;
    cin.getline(Brr,20);

    strcatX(Arr,Brr);
    cout<<"String after conctination: "<<Brr<<endl;

    return 0;
}

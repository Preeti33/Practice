#include<iostream>
using namespace std;

template<class T>
void SwapR(T *p, T *q)
{
    T temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int No1 = 11; 
    int No2 = 21;
    cout<<"Before swap data is : "<<No1<<" "<<No2<<endl;
    SwapR(&No1, &No2);
    cout<<"After swap data is : "<<No1<<" "<<No2<<endl;

    float fNo1 = 11.3; 
    float fNo2 = 21.4;
    cout<<"Before swap data is : "<<fNo1<<" "<<fNo2<<endl;
    SwapR(&fNo1, &fNo2);
    cout<<"After swap data is : "<<fNo1<<" "<<fNo2<<endl;

    char cNo1 = 'A'; 
    char cNo2 = 'B';
    cout<<"Before swap data is : "<<cNo1<<" "<<cNo2<<endl;
    SwapR(&cNo1, &cNo2);
    cout<<"After swap data is : "<<cNo1<<" "<<cNo2<<endl;

    return 0;
}
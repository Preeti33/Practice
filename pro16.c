/*
0 to 35     faill
35 to 50    pass class 
50 to 60    second class
60 to 70    first class 
70 to 100   first class with distiction
*/
#include<stdio.h>

void DisplayClass(float fMark)
{
    if((fMark > 0.0)&&(fMark < 35.0))
    {
        printf("You are fail\n");
    }
    else if((fMark >= 35.0)&&(fMark <= 50.0))
    {
        printf("Pass class\n");  
    }
    else if((fMark >= 50.0)&&(fMark < 60.0))
    {
        printf("Second class\n");
    }
     else if((fMark >= 60.0)&&(fMark < 70.0))
    {
        printf("First class\n");
    }
    else if((fMark >= 70.0)&&(fMark <= 100.0))
    {
        printf("First class with distiction\n");
    }
    else
    {
        printf("Invalid marks\n");
    }

}
int main()
{
    float fValue = 0.0;

    printf("Enter the precentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}


#include<stdio.h>
//6
//a b c d e f
void Display(char *str)
{
   while(*str != '\0')
   {
    printf("%c\n", *str);
    str++;
   }
   
}

int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    return 0;
}
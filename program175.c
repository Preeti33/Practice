//Maximum throughput in minimum hardware movememt

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountCapital(char Fname[])
{
    char Data[FILESIZE];  //mug
    int iRet = 0;
    int fd = 0;     //file descriptor
    int iSum = 0;
    int i = 0;
    int iCnt = 0;

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("unable to open the file\n");
        return -1;
    }
    
    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i<iRet; i++)
        {
            if(Data[i] >= 'A' && Data[i] <= 'Z')
            {
                iCnt++;
            }
        }
    }
    
    close(fd);
    return iCnt;

}

int main()
{
    char Fname[20];
    int iRet = 0;
    
    printf("Enter file  name to open\n");
    scanf("%s",Fname);
    
    iRet = CountCapital(Fname);
    printf("Number of capital characters : %d\n", iRet);

    return 0;
}

//0 STDIN Keyboard
//1 STDOUT Monitor
//2 STDERR Monitor
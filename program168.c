#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//Read : 4
//Write : 2
//Execute : 1

//permissions  0_Owner_Group_Other


int main()
{
    char Fname[20];
    char Data[10];  //mug
    int iRet = 0;
    int fd = 0;     //file descriptor
    
    printf("Enter file  name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("unable to open the file\n");
        return -1;
    }
    printf("File is succesfully opened with FD %d\n",fd);
    
    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));

    return 0;
}

//0 STDIN Keyboard
//1 STDOUT Monitor
//2 STDERR Monitor
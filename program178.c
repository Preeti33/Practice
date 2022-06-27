#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#define FILESIZE 1024

void FileConcate(char Source[], char Destination[])
{
    int FDsrc = 0; int FDdest = 0; int iRet = 0;
    char Buffer[FILESIZE];

    FDsrc = open(Source,O_RDONLY);
    if(FDsrc == -1)
    {
        printf("Unable to open source file\n");
        return;
    }

    FDdest = open(Destination,O_RDWR | O_APPEND);
    if(FDdest == -1)
    {
        printf("Unable to open destination file\n");
        return;
    }

    while ((iRet = read(FDsrc,Buffer,FILESIZE)) != 0)
    {
        write(FDdest,Buffer,iRet);
    }
    
    close(FDsrc);
    close(FDdest);
}

int main()
{
    char Fname1[20];
    char Fname2[20];

    printf("Enter file name which contains the data\n");
    scanf("%s",Fname1);

    printf("Enter the file name that you want to create\n");
    scanf("%s",Fname2);

    FileConcate(Fname1,Fname2);

    return 0;
}
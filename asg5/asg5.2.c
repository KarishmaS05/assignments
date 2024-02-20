//Write a program which accept one no from user and check whetherthat no is greater than 100 or not.

#include<stdio.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;
    printf("Please enter number");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}
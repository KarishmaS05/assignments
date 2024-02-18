// 2.5 accept number from user and check wheather number is even or odd

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    auto int iValue = 0;
    bool bRet = FALSE;

    printf("enter number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    if(bRet == TRUE)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}
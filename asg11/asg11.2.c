//Accept number from user and wheather it contains 0 or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("It contains Zero \n");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}
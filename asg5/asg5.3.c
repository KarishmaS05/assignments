//Accept two numbers from users and check whether numbers are equal or not.

#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = FALSE;

    printf("Enter two numbers :");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);
    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }

    return 0;
}
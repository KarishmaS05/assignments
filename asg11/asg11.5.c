//Accept number from user and count frequency of such digits which are less than 6.

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int isum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            isum = isum + 1;
        }
        iNo = iNo / 10;
    }
    return isum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number :");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d",iRet);

    return 0;
}
//find odd factorial of a given number.

#include<stdio.h>

int OddFactorial(int iNo)
{
    int fact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //for(fact = 1; iNo > 0; iNo--)
    while(iNo > 0)
    {
        if(iNo % 2 != 0)
        {
            fact = fact * iNo;
        }
        iNo--;
    }
    return fact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter Number To Find Even Factorial Of Given Number : ");
    scanf("%d",&iValue);
    
    iRet = OddFactorial(iValue);

    printf("\n Even Factorial of Number is %d.",iRet);

    return 0;
}
//write program which returns diiference between even factorial and odd factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, ifact1 = 1, ifact2 = 1;    

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iNo > 0 ; iNo --)
    {
        if(iNo % 2 == 0)
        {
            ifact1= ifact1 * iNo;     
        }
        else if(iNo % 2 != 0)
        {
            ifact2 = ifact2 * iNo;       
        }
    }
    return ifact1 - ifact2;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf(" Enter Number To Difference Between Even Factorial & Odd Factorial : ");
    scanf("%d",&iValue);
    
    iRet = FactorialDiff(iValue);
    printf("Factorial Difference is %d",iRet);

    return 0;
}
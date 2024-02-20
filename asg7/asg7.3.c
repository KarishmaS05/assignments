//write program to find factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int ifact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       ifact = ifact * iCnt;
    }
    return ifact;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Program To Find Factorial Of Given Number -\n");
    
    printf("\n Enter Number to Find its Factorial : ");
    scanf("%d",&iValue);
   
    iRet = Factorial(iValue);
    printf("\n Factorial Of Number is %d",iRet);
    
    
    return 0;
}

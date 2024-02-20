
//Accept number from number and return summation of all its non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
    register int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{  
    auto int iValue = 0;
    auto int iRet = 0;

    printf("enter a number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d \t",iRet);

    return 0;
}
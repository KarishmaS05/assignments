//Accept number from user and display its factors in decreasing order

#include<stdio.h>

void FactRev(int iNo)
{
    register int iCnt = 0;

    for(iCnt = iNo/2; iCnt > 0; iCnt --)    
    {
        printf("%d\n",iCnt);
    }

}
int main()
{
    auto int iValue = 0;

    printf("enter the number :");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;

}
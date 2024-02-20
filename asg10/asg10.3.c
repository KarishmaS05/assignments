//accept number in range from user and print addition of that numbers in between that range.

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    if((iStart > iEnd) || (iStart < 0))
    {
        printf("\n Invalid Number Range...!!!!!");
        exit(0);
    }

    while(iStart <= iEnd)
    {
        iSum = iSum + iStart;
        iStart++;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf(" Enter Starting Point : ");
    scanf("%d",&iValue1);
    
    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);
    
    iRet = RangeSum(iValue1,iValue2);

    printf(" Sum Of Given Number Range = %d.",iRet);
    
    return 0;
}
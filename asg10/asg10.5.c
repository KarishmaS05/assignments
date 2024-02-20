//accept range from user and display number in between range in reverse order.

#include<stdio.h>

void RangeRev(int iStart, int iEnd)
{
    if((iStart > iEnd) || (iEnd < 0))
    {
        printf("\n Invalid Number Range..!!!");
        exit(0);
    }

    while(iStart <= iEnd)
    {
        printf(" %d",iEnd);
        iEnd--;
    }
    return;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf(" Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf(" Enter Ending Point : ");
    scanf("%d",&iValue2);

    RangeRev(iValue1,iValue2);

    return 0;
}
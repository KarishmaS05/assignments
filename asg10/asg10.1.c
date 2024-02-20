////accept range from user and print all numbers in between that range.

#include<stdio.h>
#include<conio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if((iStart > iEnd) || (iEnd < 0))
    {
        printf(" Invalid Numbers Range..!!!");
    }

     while(iStart <= iEnd)
    {
        printf(" %d",iStart);
        iStart++;
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

    RangeDisplay(iValue1,iValue2);

    return 0;
}
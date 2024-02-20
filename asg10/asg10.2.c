//accept range from user and print even numbers in between that range. 

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if((iStart > iEnd) || (iEnd < 0))
    {
           printf(" Invalid Number Range...!!!");
    }

    while((iStart <= iEnd) || (iEnd < 0))
    {
        if(iStart % 2 == 0)
        {
             printf(" %d",iStart);
        }
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
    
    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
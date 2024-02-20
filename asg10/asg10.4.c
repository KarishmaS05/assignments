//accept numbers in range and display addition of all even numbers in between range.

#include<stdio.h>

int RangeEvenSum(int iStart, int iEnd)
{
            int iSum = 0;

            if((iStart > iEnd) || (iStart < 0))
            {
                    printf(" Invalid Number Range...!!!!");
                    exit(0);
            }

            while(iStart <= iEnd)
            {
                    if(iStart % 2 == 0)
                    {
                            iSum = iSum + iStart;
                    }
                    iStart++;
            }
            return iSum;
}
int main()
{
            int iValue1 = 0, iValue2 = 0, iRet = 0;

            printf(" Enter Starting Point : ");
            scanf("%d",&iValue1);

            printf(" Enter Ending Point : ");
            scanf("%d",&iValue2);

            iRet = RangeEvenSum(iValue1,iValue2);
            printf(" Addition is Given Even Number Of Range = %d.",iRet);

            return 0;
}
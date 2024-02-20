//Accept number of rows and columns from user and display below pattern.
//irow = 4  icol = 4
// 2 4 6 8 10
// 1 3 5 7 9
// 2 4 6 8 10
// 1 3 5 7 9

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 1;

    for(i = 1; i <= iRow; i ++)
    {
        iCnt = 1;
        for(j = 1; j <= iCol; j ++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t",j*2);
            }
            else
            {
                printf("%d\t",iCnt);
                iCnt = iCnt + 2;
            }
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter no of rows and columns :\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}

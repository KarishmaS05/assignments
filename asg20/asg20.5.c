//Accept number of rows and columns from user and display below pattern.
//irow = 4  icol = 4
// 1 2 3 4
// 2 3 4 5
// 3 4 5 6
// 4 5 6 7

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, No = 0;

    for(i = 1; i <= iRow; i ++)
    {
        No = i;
        for(j = 1; j <= iCol; j ++)
        {
            printf("%d\t",No);
            No++;
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

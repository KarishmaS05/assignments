//Accept number of rows and columns from user and display below pattern.
//irow = 3  icol = 4
//  3 3 3 3
//  2 2 2 2 
//  1 1 1 1

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i --)
    {
        for(j = 1; j <= iCol; j ++)
        {
            printf("%d\t",i);
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

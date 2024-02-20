//Accept number of rows and columns from user and display below pattern.
//irow = 4  icol = 4
// a b c d
// 1 2 3 4
// a b c d
// 1 2 3 4 

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i ++)
    {
        ch = 'a';
        for(j = 1; j <= iCol; j ++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
                ch++;
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

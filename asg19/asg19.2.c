////Accept number of rows and columns from user and display below pattern.
//irow = 4  icol = 4
//  A B C D
//  a b c d
//  A B C D 
//  a b c d

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0', ch2 ='\0';

    for(i = 1; i <= iRow; i ++)
    {
        ch1 = 'A';
        ch2 = 'a';
        for(j = 1; j <= iCol; j ++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch2);
                ch2++;
            }
            else
            {
                printf("%c\t",ch1);
                ch1++;
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

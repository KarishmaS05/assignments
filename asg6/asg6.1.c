//Aceept number from user and print '$' and '*' of that number.

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        printf(" $ ");
        printf(" * ");
    }
}
int main()
{
    int iValue = 0;
    printf(" Enter number : " );
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

//time complexity : O(N)
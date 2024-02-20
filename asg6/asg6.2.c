//accept number from user and print numbers till that number

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo <=0)
    {
        printf("\n Invalid Input....!");
    }
    for(i = 1; i <= iNo; i++)
    {
        printf(" %d",i);
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//time complexity : O(N)
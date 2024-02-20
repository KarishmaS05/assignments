//accept N from user and print first 5 multiples of that N.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i = 1;
    while(i <= 5)
    {
            printf(" %d",iNo*i);
            i++;
    }
}
int main()
{
    int iValue = 0;

    printf(" Enter Number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return 0;
}

//time complexity : O(N)
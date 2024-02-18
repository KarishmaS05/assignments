//  2.4  accept to numbers from user and display first number in second number of times

#include<stdio.h>
void Display(int iNo, int iFrequency)
{
    auto int i = 0;
    for(i=1; i <= iFrequency; i++) 
    {
        printf("%d\n",iNo);
    }  
}

int main()
{
    auto int iValue = 0;
    auto int iCount = 0;

    printf("enter number:");
    scanf("%d",&iValue);
    printf("enter frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
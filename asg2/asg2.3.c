// 2.3  Accept one number from user ,if number is less than 10 theb print "Hello" otherwise print "Demo"

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
} 

int main()
{
    auto int iValue = 0;

    printf("enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
//accept no from user and print that no of * on screen

#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
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
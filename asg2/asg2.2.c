// 2.2 accept one number from user and print * of that number on screen

#include<stdio.h>

void Display(int iNo)
{
    while( iNo > 0)
    {
        printf("*");
        iNo --;
    }
}
int main()
{
    auto int iValue = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
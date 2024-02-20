//aceept number from user and print its number line.

#include<stdio.h>

void Display(int iNo)
{
    int i = -iNo;

     while(i <= iNo)
    
     {
         printf(" \t %d",i);
         i++;
     }
}

int main()
{
    int iValue = 0;

    printf("Enter  Number to print its Number Line : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//time complexity : O(N)
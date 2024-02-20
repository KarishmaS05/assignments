//accept N from user and print odd numbers upto N.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i = 1;

   // while(i < iNo)
   for(i = 1; i < iNo; i++)
    {
        if(i % 2 != 0)
        {
            printf(" %d\n", i);
        }
      //  i++;
    }

}
int main()
{
    int iValue = 0;

    printf( "Enter Number to print All Odd Number up to Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    
    return 0;
}

//time complexity : O(N)
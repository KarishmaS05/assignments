//Accept number from user and display its table in reverse order.

#include<stdio.h>
void Table(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 10; i >= 1; i--)
    {
        printf(" %d \t",iNo * i);
    }
}
int main()
{
    int iValue = 0;
    printf("Program Accept Number From User And Display Its Table -\n");
    
    printf("\n Enter Number to Print Its Table :");
    scanf("%d",&iValue);
    
    Table(iValue);
    
    return 0;
}
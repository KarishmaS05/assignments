//accept number from user ,if it is less than 50 then print 'small',if greater than 50 and less than 100 then print 'Medium', if greater than 100 then print 'Large'.

#include<stdio.h>

void Number(int iNo)
{
    
    if(iNo < 50)
    {
        printf("\n Given Number %d is Small.",iNo);
       
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("\n Given Number %d is Medium.",iNo);
    }
    else
    {
        printf("\n Given Number %d is Greater.",iNo);
    }

    return;
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number : ");
    scanf("%d",&iValue);

    Number(iValue);
    
    return 0;
}
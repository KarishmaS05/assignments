//Accept a number from user and print even factors of that number

#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    register int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i<= (iNo/2); i++)
    {
        if((iNo % i == 0)&&(i % 2 == 0))
        {
            printf("%d\t",i);
        }
        
    }
}
int main()
{
    auto int iValue = 0;
    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);
    return 0;
}
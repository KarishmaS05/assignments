//Accept number from user and display all its non factors

#include<stdio.h>

void NonFact(int iNo)
{
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d \t",iCnt);
        }
    }
}
int main()
{
    auto int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;

}
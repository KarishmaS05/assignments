//accept amount in Us doller and return its corresponding value in INDIAN currency

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////           Input =  10    ,   1200        (Example = 1$ = 70Rs)
////////            Output =  700  ,  84000
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int DollarToINR(int iNo)
{
    return iNo * 70;
}
int main()
{
    int iValue = 0, iRet = 0;

     printf(" Amount In US Dollar And Return Its Corresponding Value In Indian Currency - \n");

    printf("\n Enter Number Of USD : ");
    scanf("%d",&iValue);
    
    iRet = DollarToINR(iValue);
    printf("\n Value in INR is %d",iRet);

    return 0;
}
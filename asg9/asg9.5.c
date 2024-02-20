//Accept area in square feet and convert it into square meter.
//(1 sq feet = 0.0929 sq m)

#include<stdio.h>

double SquareMeter(int iNo)
{
    return iNo * 0.0929 ;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf(" Enter Area In Square Feet : ");
    scanf("%d",&iValue);
    
    dRet = SquareMeter(iValue);
    printf("Given Area in Square feet %d Convert into Square Meter = %0.6lf .",iValue,dRet);
    
    return 0;
}
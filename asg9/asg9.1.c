//A Program Which Accept Radius Of Circle From User And Calculate Its Area.

#include<stdio.h>

#define PI  3.14

double CircleArea(float Radius)
{
    return  PI * Radius * Radius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf(" Enter Radius Of Circle : ");
    scanf("%f",&fValue);
    
    dRet = CircleArea(fValue);
    printf("\n Area is = %lf",dRet);        ///////(double = %lf)

    return 0;
}
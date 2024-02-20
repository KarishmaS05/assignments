//Accept temprature in Fahrenheit and convert it into Celcious.
//(1 Celcious =(Fahrenheit - 32) *(5/9))

#include<stdio.h>

double fhtoCs(float fTemp)
{
    return((fTemp - 32) * (5 / 9));
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf(" Enter  Temperature : ");
    scanf("%f",&fValue);
    
    dRet = fhtoCs(fValue);
    printf(" temperature in Fahrenheit is %0.f into Celsius is = %0.4f .",fValue,dRet);
    
    return 0;
}
//Accept distance in kilometer and convert it into meter.
//(1 KM = 1000 M)

#include<stdio.h>

int KMtometer(int iNo)
{
    return iNo * 1000;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf(" Enter Distance in Kilometer : \n");
    scanf("%d",&iValue);
    
    iRet = KMtometer(iValue);
    printf(" Meter is = %d",iRet);

    
    return 0;
}
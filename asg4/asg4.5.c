//Accept number from user and display difference summetion of all its factors and non factors

#include<stdio.h>

 int FactDiff(int iNo)
{
    register int iCnt = 0;
     int iFact = 0;
     int iNfact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if(iNo % iCnt)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNfact = iNfact + iCnt;
        }
    }
    return iFact - iNfact;


}
int main()
{
    auto int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}
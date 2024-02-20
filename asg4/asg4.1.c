
//Accept number from user and display its multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
    register int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt ++)    
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);
    
    iRet = MultFact(iValue);
    printf("%d",iRet);

    return 0;

}

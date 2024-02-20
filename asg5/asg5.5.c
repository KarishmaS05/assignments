//accept total marks and obtained marks from user and calculate percentage.

#include<stdio.h>

float Percentage(int iTNo, int iONo)
{    

    if((iTNo * iONo == 0) || (iTNo < iONo))
    {
        printf("wrong input.....\n");
    }
    else
    {
         return ((iONo * 100) / iTNo);
         
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks \n");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    if(fRet > 0)
    {
    printf("percentage is : %f",fRet);
    }

    return 0;
}
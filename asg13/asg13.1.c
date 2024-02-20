//Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iCnt = 0, iEven = 0, iOdd = 0;
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        printf("%d\t",Arr[iCnt]);
        if(Arr[iCnt] % 2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }
    printf("\n");
    return iEven - iOdd;
}

int main()
{
    int iSize = 0, iCount = 0,iRet = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize* sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    printf("Enter %d elements :\n",iSize);

    for(iCount = 0; iCount < iSize; iCount ++)
    {
        scanf("%d",&p[iCount]);
    }

    iRet = Difference(p,iSize);
    printf("Results is %d",iRet);
     
    return 0;

}

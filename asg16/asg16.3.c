//Accept N numbers from user and return difference between Largest  and the Smallest number.
#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[],int iLength)
{
    int iCnt = 0, iMax = Arr[0], iMin = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMax - iMin;
}

int main()
{
    int iSize = 0,iValue = 0,iCount = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);
    for(iCount = 0; iCount < iSize; iCount ++)
    {
        printf("Enter elements : %d\n",iCount+1);
        scanf("%d",&p[iCount]);
    }
    iRet = Maximum(p,iSize);
    printf("Minimum number is %d",iRet);
    
    free(p);

    
    return 0;
}
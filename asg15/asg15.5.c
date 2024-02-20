//Accept N numbers from user and accept one another nymber as NO, return index of last occurance of that NO.
#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[],int iLength)
{
    int iCnt = 0, iMult = 1;
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
        else
        {
            iMult = 0;
        }
    }
    return iMult;
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
    iRet = Product(p,iSize);
    printf("Product of odd numbers is %d",iRet);
    
    free(p);

    
    return 0;
}
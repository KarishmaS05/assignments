//Accept N numbers from user and accept one another nymber as NO,check wheather NO is present or not.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;

bool Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}
int main()
{
    int iSize = 0,iValue = 0,iCount = 0;
    int *p = NULL;
    bool bRet = FALSE;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the number :");
    scanf("%d",&iValue);

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
    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    free(p);

    
    return 0;
}
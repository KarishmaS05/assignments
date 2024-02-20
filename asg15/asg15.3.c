//Accept N numbers from user and accept one another nymber as NO, return index of last occurance of that NO.
#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0, i = -1 ;
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {
            i = iCnt;
        }
    }
    return i;
}
int main()
{
    int iSize = 0,iValue = 0,iCount = 0, iRet = 0;
    int *p = NULL;

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
    iRet = FirstOcc(p,iSize,iValue);
    if(iRet == -1)
    {
        printf("No such a number present");
    }
    else
    {
        printf("Fist occurance of number is %d",iRet);
    }
    free(p);

    
    return 0;
}
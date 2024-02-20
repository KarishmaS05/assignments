//Accept N numbers from user and  accept one another number from user as No, returns frequency of No from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength, int iNo)
{
    int iCnt = 0, iFrequency = 0; 
   
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency = iFrequency + 1;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize = 0, iValue = 0, iCount = 0,iRet = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter a number :");
    scanf("%d",&iValue);

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

    iRet = Frequency(p,iSize,iValue);
    printf("\n Result is %d :",iRet);
     
    return 0;

}


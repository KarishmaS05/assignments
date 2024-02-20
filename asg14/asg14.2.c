//Accept N numbers from user and returns difference between frequency of even and odd  numbers.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0, iEven = 0, iOdd = 0; 
   
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven = iEven + 1;
        }
        else
        {
            iOdd = iOdd + 1;
        }
    }
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

    iRet = Frequency(p,iSize);
    printf("\n Result is %d :",iRet);
     
    return 0;

}


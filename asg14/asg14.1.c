//Accept N numbers from user and returns frequency of even numbers.

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0, iFrequency = 0; 
   
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iFrequency = iFrequency + 1;
        }
    }
    return iFrequency;
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

    iRet = CountEven(p,iSize);
    printf("\n Result is %d :",iRet);
     
    return 0;

}


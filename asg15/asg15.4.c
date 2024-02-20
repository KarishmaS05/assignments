//Accept N numbers from user and accept Range , display all elements from that Range.
#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0,iValue1 = 0,iValue2 = 0,iCount = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the Starting point :\n");
    scanf("%d",&iValue1);
    printf("Enter the Ending point :\n");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    else
    {
        printf("Enter %d elements\n",iSize);
        for(iCount = 0; iCount < iSize; iCount ++)
        {
            printf("Enter elements : %d\n",iCount+1);
            scanf("%d",&p[iCount]);
        }
        Range(p,iSize,iValue1,iValue2);
    }

    free(p);
    return 0;
}
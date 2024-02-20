//Accept N numbers from user and check wheather that numbers contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool Check(int Arr[],int iLength)
{
    int iCnt = 0, iFrequency = 0; 
   
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCount = 0;
    bool bRet = FALSE;
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

    bRet = Check(p,iSize);
    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }
     
    return 0;

}


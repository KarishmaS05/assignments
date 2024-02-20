//Accept N numbers from user and display summation of digits of each number.
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt = 0, iDigit = 0, iNo = 0, iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        iNo = Arr[iCnt];
        iSum = 0;        //value of Cnt increase in while loop thats why reinitialised it.

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;

        }
        printf("%d\t",iSum);
    }
}

int main()
{
    int iSize = 0,iCount = 0;
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
    Digits(p,iSize);
    
    free(p);

    
    return 0;
}
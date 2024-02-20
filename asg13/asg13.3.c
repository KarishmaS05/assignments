//Accept N numbers from user and display all such elements which are even and divisible by 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0; 
   
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if((Arr[iCnt] % 2 == 0) && (Arr[iCnt] % 5 == 0))
        {
            printf("\n\n%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCount = 0;
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

    Display(p,iSize);
     
    return 0;

}


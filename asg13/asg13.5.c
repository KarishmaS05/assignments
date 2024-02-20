//Accept N numbers from user and display all such elements which are multiples of 11.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0; 
   
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d\t",Arr[iCnt]);
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
    printf("\n");

    Display(p,iSize);
     
    return 0;

}


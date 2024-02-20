//accept number from user and display below pattern.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////             Input =  5
/////             Output =  *  *  *  *  *  #  #  #  #  #
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
           iNo = -iNo;
    }

    for(i=1; i <= (iNo*2); i++)
    {
            if(i <= iNo)
            {
                   printf(" * ");
            }
            else
            {
                 printf(" # ");
            }
    }

}
int main()
{
    int iValue = 0;
    
    printf("\n Enter Number to Print Pattern. : ");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}
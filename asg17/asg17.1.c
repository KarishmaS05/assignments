//input : 4
//output :  A B C D

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt ++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;
    printf("Enter the number of elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
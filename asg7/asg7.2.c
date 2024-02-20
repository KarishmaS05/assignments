//Accept single digit number from user and print it in word.

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
          iNo = -iNo;
    }
    switch(iNo)
    {
            case 1:
                printf("One \n");
                break;

            case 2:
                printf("Two\n");
                break;

            case 3:
                printf("\n Three");
                break;

            case 4:
                printf("\n Four");
                break;

            case 5:
                printf("\n Five");
            break;

            case 6:
                printf("\n Six");
                break;

            case 7:
                printf("\n Seven");
                break;

            case 8:
                printf("\n Eight");
                break;

            case 9:
                printf("\n Nine");
                break;

            default:
                printf("\n Invalid Number.");
                break;
    }
}

int main()
{
    int iValue = 0;

    printf("Accept single digit number from user and print it into word.\n");
    printf("\n======================================================\n");

    printf("\n Enter Number.. : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
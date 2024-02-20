//Accept one character from user and convert case of that charachter.


#include<stdio.h>

void DisplayConvert(char Cvalue)
{
    if((Cvalue >= 'A') && (Cvalue <= 'Z'))        //ASCII value of A to Z start from (65)
    {
        printf("%c",Cvalue+32);    // 65+32 = 97 
    }
    else if((Cvalue >= 'a') && (Cvalue <= 'z'))    //ASCII value from a to z start from (97)
    {
        printf("%c",Cvalue-32);   // 97-32 = 65
    }
}

int main()
{
    auto char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
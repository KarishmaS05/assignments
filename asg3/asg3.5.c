
//Accept character from user and check wheather that character is Vowel or not

#include<stdio.h>
typedef int bool;

# define True 1
# define FALSE 0

bool ChkVowel(char c)
{
    if((c >= 'a') || (c <= 'z'))
    {
        c = c-32;
    }
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return True;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    auto char cValue ='\0';
    bool bRet = FALSE; 

    printf("Enter character :");
    scanf("%c",&cValue);
    
    bRet = ChkVowel(cValue);

    if(bRet == True)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}
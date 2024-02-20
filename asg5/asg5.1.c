
//write a program which accept name from user and print that name
#include<stdio.h>
int main()
{
    char Name[30];

    printf("please enter full name :\n");
   // scanf("%s",&Name);  //Take only first name
    scanf("%[^\n]",Name);

    printf("\n Your name is : %s",Name);

    return 0;
}
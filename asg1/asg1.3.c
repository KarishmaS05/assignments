//print 5 to 1 numbers on screen

#include<stdio.h>

void Display()
{
    auto int i =0;

    for(i=5; i>0; i--)
    {
        printf("%d\n",i);
        
    }
}

int main()
{
    Display();

    return 0;
}
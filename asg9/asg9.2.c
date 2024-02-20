//accept legth and width of rectangle and calculate area of rectangle.
//(Area = length*width)

#include<stdio.h>

double RectArea(float Width, float Height)
{
    return Width * Height;
}
int main()
{
    float fValue1= 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    
    printf(" Enter Width Of Rectangle : ");
    scanf("%f",&fValue1);
    
    printf("Enter Height Of Rectangle : ");
    scanf("%f",&fValue2);
    

    dRet = RectArea(fValue1, fValue2);
    printf(" Area Of Rectangle is = %lf",dRet);

    return 0;
}
//Area of triangle
#include<stdio.h>

int main ()
{
    float b,h,area;
    printf("Enter base : ");
    scanf("%f", &b);

    printf("Enter height : ");
    scanf("%f", &h);
    
    area = 0.5*b*h;

    printf("The area of triangle is : %f",area);
    return 0;
}
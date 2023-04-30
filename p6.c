//Perimeter of rectangle
#include<stdio.h>

int main ()
{
    float l,b,perimeter;
    printf("Enter length : ");
    scanf("%f", &l);
    printf("Enter breadth : ");
    scanf("%f", &b);

    perimeter = 2*(l+b);

    printf("The perimeter of rectangle is : %f",perimeter);
    return 0;
}
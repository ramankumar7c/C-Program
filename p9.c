//Area of scalene triangle
#include<stdio.h>
#include<math.h>

int main ()
{
    float a,b,c,s,area;
    printf("Enter 1st side : ");
    scanf("%f", &a);

    printf("Enter 2nd side : ");
    scanf("%f", &b);

    printf("Enter 3rd side : ");
    scanf("%f", &c);

    s=(a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of scalene traingle is : %f",area);

    return 0;
}
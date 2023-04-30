//Types of Triangle
#include<stdio.h>
int main ()
{
    float a,b,c;
    printf("Enter length of sides of triangle : ");
    scanf("%f%f%f", &a,&b,&c);
    
    if(a==b && b==c && a==c)
    printf("Triangle is Equilateral.\n");

    else if(a==b || b==c || a==c)
    printf("Triangle is Isoceles.\n");
    
    else
    printf("Triangle is Scalene.\n");

    return 0;
}
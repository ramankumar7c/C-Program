//Exchange of two numbers
#include<stdio.h>

int main ()
{
    int a = 10, b = 20, c;
    c=a;
    a=b;
    b=c;
    printf("Exchanged numbers are %d and %d",a,b);
    return 0;
}
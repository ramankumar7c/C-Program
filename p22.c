//Greatest among 3 numbers

#include<stdio.h>
int main ()
{
    int a,b,c;

    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("Enter 2nd number : ");
    scanf("%d", &b);

    printf("Enter 3rd number : ");
    scanf("%d", &c);

    if(a>b && a>c)
    printf("The greatest number between %d,%d and %d is %d.\n",a,b,c,a);

    else if(b>a && b>c)
    printf("The greatest number between %d,%d and %d is %d.\n",a,b,c,b);

    else
    printf("The greatest number between %d,%d and %d is %d.\n",a,b,c,c);

    return 0;

}
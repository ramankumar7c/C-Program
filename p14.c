//negative or positive

#include<stdio.h>
int main ()
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);

    if(a>0)
    printf("Entered number is a positive number.\n");

    else if(a<0)
    printf("Entered number is a negative number.\n");

    else
    printf("Entered number is zero.\n");

    return 0;
}
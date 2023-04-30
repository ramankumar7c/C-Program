//Even or odd

#include<stdio.h>
int main ()
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);

    if(a%2==0)
    printf("Entered number is an even number.\n");

    else
    printf("Entered number is an odd number.\n");

    return 0;
}
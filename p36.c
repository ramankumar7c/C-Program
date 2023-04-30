//Factorial

#include<stdio.h>
int main ()
{
    int i,n;
    long int factorial = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    //Enter the number of which you want to find factorial
    for(i=1 ; i<=n ; i++)
    factorial = factorial*i;
    printf("%d! = %ld",n,factorial);

    return 0;
}
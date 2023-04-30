//Number of digits in a given number

#include<stdio.h>
int main ()
{
    int n,d,c=0,n1;
    printf("Enter a number : ");
    scanf("%d", &n);
    //Enter the number of which we want to count no of digits
    n1=n;
    //Store the value of n in another variable n1. So that we can use it later
    while (n != 0)
    {
        c++;
        n=n/10;
    }
    printf("The number of digits of %d is %d.\n",n1,c);
    return 0;
}
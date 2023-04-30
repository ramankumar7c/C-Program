//Subtract number from the sum of its digits

#include<stdio.h>
int main ()
{
    int n,d,sum=0,n1;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    n1=n;
    //Store the value of n in another variable n1. So that we an use it later
    while (n != 0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("Result = %d",n1-sum);
    return 0;
}
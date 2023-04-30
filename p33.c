//Sum of natural numbers

#include<stdio.h>
int main ()
{
    int n,i,sum = 0;
    printf("Enter the limit : ");
    scanf("%d", &n);
    //Enter the total number of natural numbers of which you want to find sum
    for(i=1 ; i<=n ; i++)
    sum = sum+i;
    printf("Sum of all  natural numbers upto %d = %d",n,sum);

    return 0;
}
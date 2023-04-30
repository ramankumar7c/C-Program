//Value of y=x^n

#include<stdio.h>
int main ()
{
    int i,x,y=1,n;
    printf("Enter the value of x and n : ");
    scanf("%d%d", &x,&n);
    //Enter base as x & exponent as n
    for(i=1 ; i<=n ; i++)
    y = y*x;

    printf("y = %d",y);

    return 0;

    
}
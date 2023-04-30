//First n Fibonacci series

#include<stdio.h>
int main ()
{
    int n,i,f1=0,f2=1,f;
    printf("Enter no of terms : ");
    scanf("%d", &n);
    //Enter no of terms you want to print of Fibonacci series
    printf("The fibonacci series generated is : ");
    printf("%d %d",f1,f2);
    for(i=1 ; i<=n-2 ; i++)
    {
        f=f1+f2;
        printf(" %d",f);
        f1=f2;
        f2=f;
    }
    return 0;
}
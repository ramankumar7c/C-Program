//Print natural number using while loop

#include<stdio.h>
int main ()
{
    int i=1,n;
    printf("Enter last number : ");
    scanf("%d", &n);
    //Enter last term of series
    while(i<=n)
    {
        printf("%d\t",i);
        i=i+1;
    }
    return 0;
}
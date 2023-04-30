//natural numbers

#include<stdio.h>
int main ()
{
    int i,n;

    printf("Enter last number : ");
    scanf("%d", &n);
    //Enter the number upto which you want to write natural number
    printf("The natural numbers are ");
    for(i=1;i<=n;i++)
    printf("\t%d",i);

    return 0;
}

//Multiplication Table

#include<stdio.h>
int main ()
{
    int i,n;
    printf("Enter a number : ");
    scanf("%d", &n);
    //Enter the number of which you want to write multiplication table
    for(i=1 ; i<=10 ; i++)
    printf("\n%d * %d = %d",n,i,n*i);
    return 0;

}
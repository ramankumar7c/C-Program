//2^n-1 series

#include<stdio.h>
int main ()
{
    int i,n,y=1;
    printf("Enter no of terms : ");
    //How many numbers of term you want to print
    scanf("%d", &n);
    printf("The series is ");
    for(i=1 ; i<=n ; i++)
    {y = 2*y;
    
    printf(" %d",y-1);}

    return 0;
}
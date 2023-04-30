//Reverse Factorial

#include<stdio.h>
int main ()
{
    int n,i=1,n1=1;
    printf("Enter factorial : ");
    scanf("%d", &n);
    //Enter the number of which you want to find reverse factorial

    while (n1<=n)
    {
        n1*=i;
        i++;
    }
    printf("Number : %d",i-2);
    
    return 0;
}
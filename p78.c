//Decimal to binary using array

#include<stdio.h>
int main ()
{
    int i,n,a[10];
    
    printf("Enter the number to convert : ");
    scanf("%d", &n); //Enter the number which you want to convert

    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("Binary of Entered number is ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
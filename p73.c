//Addition of numbers using array

#include<stdio.h>
int main ()
{
    int i,n,sum=0;

    printf("Enter no of numbers you want to find sum : ");
    scanf("%d",&n);
    //Enter total number of elements present in the array

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the %dth element : ",i+1);
        scanf("%d", &a[i]); //Enter each number one by one
        sum = sum + a[i];
    }

    printf("Sum = %d",sum);
    return 0;
}
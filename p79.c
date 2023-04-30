//Inverse of an array

#include<stdio.h>
int main ()
{
    int i,n;

    printf("Enter the no of numbers : ");
    scanf("%d", &n);
    //Enter total number of elements present in the array

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the %d number : ",i+1);
        scanf("%d", &a[i]); //Enter each number one by one
    }

    int rev_a[n];

    for(i=0;i<n;i++)
    {
        rev_a[i] = a[n-1-i]; //Numbers will be reversed one by one
    }

    printf("Reversed array : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", rev_a[i]);
    }

    return 0;
}
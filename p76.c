//Max of numbers using array

#include<stdio.h>
int main ()

{
    int i,n,sum=0,max;
    printf("Enter no of elements in the array : ");
    scanf("%d", &n);
    //Enter total number of elements present in the array

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the %d number : ",i+1);
        scanf("%d",&a[i]); //Enter each number one by one
        max = a[0];
    }
    
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        max = a[i];
    }
    printf("The largest number is %d",max);

    return 0;
}
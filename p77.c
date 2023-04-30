//Min of numbers using array

#include<stdio.h>
int main ()

{
    int i,n,sum=0,min;
    printf("Enter no of elements in the array : ");
    scanf("%d", &n);
    //Enter total number of elements present in the array

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the %dth number : ",i+1);
        scanf("%d",&a[i]); //Enter each number one by one
        min = a[0];
    }
    
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        min = a[i];
    }
    printf("The smallest number is %d",min);

    return 0;
}
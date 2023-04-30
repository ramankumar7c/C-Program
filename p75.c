//Linear Search in Array

#include<stdio.h>
int main ()
{
    int i,n,ele;

    printf("Enter no of elements in the array : ");
    scanf("%d", &n);
    //Enter total number of elements present in the array

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the %dth element : ",i+1);
        scanf("%d", &a[i]); //Enter each number one by one
    }
    printf("Enter the number you want to search : ");
    scanf("%d", &ele); //Enter the elemets which you want to search

    for(i=0;i<n;i++)
    {
        if (a[i]==ele)
        {
            printf("%d is found at %d.",ele,i+1);
            break;
        }  
    }
    if(i==n)
    printf("%d is not found.",ele);

    return 0;
}
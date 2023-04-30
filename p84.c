//Bubble Sort

#include<stdio.h>
int main ()
{
    int i,j,n,temp;

    printf("Enter the no of elements in the array : ");
    scanf("%d", &n); //Total no of elements

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the %dth element : ",i+1);
        scanf("%d",&a[i]); //Enter each element one by one
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
          if(a[j]>a[j+1])
          {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
          }
    }
    printf("The Sorted array is : ");
    for(i=0;i<n;i++)
      printf("\t%d",a[i]); //The Sorted array will be printed

    return 0;  
}
//Addition of two matrices

#include<stdio.h>
int main ()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("Enter the first matrix : ");
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
       scanf("%d", &a[i][j]); //Enter element of first matrix one by one

    printf("Enter the second matrix : ");
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
       scanf("%d", &b[i][j]); //Enter element of second matrix one by one

    printf("The first matrix is : ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("\t%d",a[i][j]);
    }

    printf("\nThe second matrix is : ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("\t%d",b[i][j]);
    }

    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
       c[i][j] = a[i][j] + b[i][j];

    printf("\nSum of matrices are : ");
      for(i=0;i<3;i++)
      {
        printf("\n");
        for(j=0;j<3;j++)
          printf("\t%d",c[i][j]); //Sum of first and second matrices will be displayed
      }
    return 0;   
}
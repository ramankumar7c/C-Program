//Multiplication of two matrices

#include<stdio.h>
int main ()
{
    int m,n,p,q,i,j,k;
    printf("Enter the no of rows & columns in first matrix : ");
    scanf("%d%d",&m,&n); //Enter rows & columns of first matrix one by one

    int a[m][n];

    printf("Enter the first matrix : ");
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
       scanf("%d", &a[i][j]); //Enter element of first matrix one by one

    printf("Enter the no of rows & columns in second matrix : ");
    scanf("%d%d",&p,&q); //Enter rows & columns of second matrix one by one

    int b[p][q];

    printf("Enter the second matrix : ");
    for(i=0;i<p;i++)
      for(j=0;j<q;j++)
       scanf("%d", &b[i][j]); //Enter element of second matrix one by one

    printf("The first matrix is : ");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        printf("\t%d",a[i][j]); //The first matrix will be printed
    }

    printf("\nThe second matrix is : ");
    for(i=0;i<p;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        printf("\t%d",b[i][j]); // The second matrix will be printed
    }

    int c[m][q];

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<q;k++)
              c[i][j] += a[i][k]*b[k][j];
        }
    }

    printf("\nMultiplication of matrices are : ");
    for(i=0;i<m;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
        printf("\t%d",c[i][j]); //Multiplication result will be printed
    }    
return 0;
}
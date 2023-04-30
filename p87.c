//Transpose of a matrix

#include<stdio.h>
int main ()
{
    int m,n,i,j;
    printf("Enter the no of rows & columns in the matrix : ");
    scanf("%d%d",&m,&n); //Rows and Columns will be entered here

    int a[m][n],tr_a[n][m];
    printf("Enter the elements of matrix : ");
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      scanf("%d",&a[i][j]); //Elements will be entered here

    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      tr_a[j][i] = a[i][j]; //Transpose will be done here

    printf("Transpose of Matrix : \n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
         printf("\t%d",tr_a[i][j]);
    }
    return 0;     
}
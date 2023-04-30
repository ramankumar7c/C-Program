/* * * * *
   * * *
   * *
   * */
  
#include<stdio.h>
int main ()
{
   int i,j,rows;
   printf("Enter number of rows: ");
   scanf("%d", &rows);
   //Enter no of rows to be printed
   for (i = rows; i >= 1; i--)
   {
      for (j = 1; j <= i; j++)
      {
        printf("* ");
      }
      printf("\n");
   }
   return 0;
}

/*1
  2 2
  3 3 3
  4 4 4 4*/
 
#include<stdio.h>
int main ()
{
   int i,j,rows;

   printf("Enter number of rows : ");
   scanf("%d",&rows);
   //Enter no of rows to be printed
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	 {
       printf(" %d",i);
     }
	printf("\n");
   }
   return 0;
}

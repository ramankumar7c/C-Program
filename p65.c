/* 4 3 2 1
   3 2 1
   2 1
   1 */
 
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter no of rows : ");
  scanf("%d", &n);
  //Enter no of rows to be printed
  for(i=n;i>=1;i--)
  {
    for(j=i;j>=1;j--)
    {
      printf(" %d",j);
    }
    printf("\n");
  }
  return 0;
}
/* k
   l m
   n o p
   q r s t */
 
#include<stdio.h>
int main()
{
  int i,j,n;
  char ch='k';
  printf("Enter number of rows : ");
  scanf("%d",&n);
  //Enter no of rows to be printed
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf(" %c",ch);
      ch++;
    }
    printf("\n");
  }
  return 0;
}
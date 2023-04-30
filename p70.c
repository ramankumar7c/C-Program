//Sin x

#include <stdio.h>

int main()
{
  int i,deno=1,n;
  float deg,radian,sum,numer;
  printf("Enter the angle : ");
  scanf("%f", &deg);
  //Enter angle in degree
  printf("Enter the number of terms : ");
  scanf("%d", &n);
  //Enter the number of terms in the expansion
  radian = deg*3.14/180;
  sum = radian;
  numer=radian;
  for(i=1;i<=n;i++)
  {
    numer=numer*(-1)*radian*radian;
    deno=deno*2*i*(2*i+1);
    sum = sum + numer/deno;
  }

  printf("sin %0.2f = %f",deg,sum);

  return 0;
}
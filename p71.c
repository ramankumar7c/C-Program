// Cos x

#include<stdio.h>
int main ()
{
    int i,deno=1,n;
    float sum=1.0,radian,deg,numer=1.0;
    printf("Enter the value of Cosine : ");
    scanf("%f", &deg);
    //Enter angle in degree
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    //Enter the number of terms in the expansion
    radian = deg*3.14/180;

    for(i=1;i<n;i++)
    {
        numer = numer*(-1)*radian*radian;
        deno = deno*2*i*(2*i-1);
        sum = sum + numer/deno;
    }
    printf("Cos %0.2f = %f",deg,sum);
 return 0;
}
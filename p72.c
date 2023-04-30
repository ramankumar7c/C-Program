// e^x

#include<stdio.h>
int main ()
{
    int i,x,n;
    float numer=1.0,deno=1.0,sum=1.0;
    printf("Enter power of e : ");
    scanf("%d", &x);
    //Enter the power of e which you want to find
    printf("Enter number of terms : ");
    scanf("%d", &n);
    //Enter the number of terms in the expansion
    for(i=1;i<=n;i++)
    {
        numer = numer*x;
        deno = deno*i;
        sum = sum + numer/deno;
    }
    
    printf("e^%d = %f",x,sum);

    return 0;
}
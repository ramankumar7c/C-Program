//Average of digits of decimal number system

#include<stdio.h>
int main ()
{
    int i;
    float sum=0;
    printf("Average of decimal numbers = ");
    for(i=0 ; i<=9 ; i++)
    sum = sum+i;
    printf("%f",sum/10);
    return 0;
}
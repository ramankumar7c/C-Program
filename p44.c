//Add numbers until user enter zero

#include<stdio.h>
int main ()
{
    double number,sum=0;
    do
    {
        printf("Enter a number : ");
        scanf("%lf", &number);
        //Enter each number one after another
        sum = sum+number;
    }
    while (number != 0.0);
    printf("Sum = %0.2lf",sum);
    return 0;
}
//Fahrenheit to Celsius
#include<stdio.h>

int main ()
{
    float C,F;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &F);

    C = (F-32)*5/9;

    printf("Temperature in Celsius = %f",C);

    return 0;
}
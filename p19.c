//income tax upto 500000

#include<stdio.h>

int main ()
{
    float income,tax;

    printf("Total income in FY : ");
    scanf("%f",&income);

    if(income < 150000)
    printf("No tax due");

    else if(income>150000 && income <= 300000)
    printf("Tax dues is Rs.%0.2f",income*0.10);

    else if(income > 300000 && income <= 500000)
    printf("Tax dues is Rs.%0.2f",income*0.20);

    else
    printf("Not a valid income details");

    return 0;

}
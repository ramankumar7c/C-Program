//Electricity Bill

#include<stdio.h>
int main ()
{
    float unit,amount;

    printf("Units consumed : ");
    scanf("%f",&unit);

    if(unit<=50)
    {
        amount = unit*3;
        printf("Electricity Bill due is Rs.%0.2f\n",amount);
    }
    else if(unit>50&&unit<=100)
    {
        amount = (50*3)+(unit-50)*4.50;
        printf("Electricity Bill due is Rs.%0.2f\n",amount);
    }
    else
    {
        amount = (50*3)+(50*4.50)+(unit-100)*7;
        printf("Electricity Bill due is Rs.%0.2f\n",amount);
    }
    return 0;
}
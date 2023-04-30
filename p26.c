//Salary according to sales

#include<stdio.h>
int main ()
{
    int x;
    float y;

    printf("No of products sold by employee : ");
    scanf("%d", &x);

    (x == 40) ? (y = 300) : (x < 40) ? (y = 4*x+100) : (y = 4.5*x+150);

    printf("Salary = Rs. %0.2f",y);

    return 0;
}
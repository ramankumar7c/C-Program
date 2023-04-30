//Equation Solver

#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter x : ");
    scanf("%d", &x);

    (x<=2) ? (y=1.5*x+3) : (y=2*x+5);
    
    printf("y = %d",y);

    return 0;
}
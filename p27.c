//Calculator using switch case

#include<stdio.h>
int main ()
{
    int a,b,op;

    printf("Enter Operation (1 for sum, 2 for difference, 3 for product, 4 for division, 5 for remainder) : ");
    scanf("%d", &op);

    printf("Enter two integers : ");
    scanf("%d%d", &a,&b);

    switch(op)
    {
    case 1 : printf("Sum = %d",a+b);break;
    case 2 : printf("Difference = %d",a-b);break;
    case 3 : printf("Product = %d",a*b);break;
    case 4 : printf("Division = %d",a/b);break;
    case 5 : printf("Remainder = %d",a%b);break;
    default : printf("Not a vaid operation or intergers./n");
    }

    return 0;

}
//user based arithmetic operations

#include<stdio.h>
int main ()
{
    int a,b;
    char op;

    printf("Enter Arithmetic Operations( + , - , * , / ) : ");
    scanf("%c", &op);

    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("Enter 2nd number : ");
    scanf("%d", &b);

    if(op == '+')
    printf("The sum of entered numbers is %d.\n",a+b);

    else if(op == '-')
    printf("The difference of entered numbers is %d.\n",a-b);

    else if(op == '*')
    printf("The product of entered numbers is %d.\n",a*b);

    else if(op == '/')
    printf("The division of entered numbers is %d.\n",a/b);

    else
    printf("Entered numbers or operation is not valid.\n");

    return 0;
}
//Multiplication table using while loop

#include<stdio.h>
int main ()
{
    int i=1,n;
    printf("Enter number : ");
    scanf("%d", &n);
    //Enter the number of which you want print multiplication table
    while(i<=10)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
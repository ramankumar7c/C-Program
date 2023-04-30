//Reverse of a number using while loop

#include<stdio.h>
int main ()
{
    int n,reverse=0;
    printf("Enter number : ");
    scanf("%d", &n);
    //Enter the number of which you want reverse
    while (n != 0)
    {
        reverse = reverse*10;
        reverse = reverse + n%10;
        n = n/10;
    }
    printf("Reverse of entered number is %d\n",reverse);
    return 0;
}
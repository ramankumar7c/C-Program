//Perfect number

#include<stdio.h>
int main ()
{
    int i=1,num,sum=0;
    printf("Enter number : ");
    scanf("%d", &num);
    //Enter the number which you want to check for perfect
    while (i<num)
       {
        if (num % i == 0)
        sum = sum+i;
        i++;
       }
       
       if (sum == num)
       printf("%d is a perfect number.\n",num);
       else
       printf("%d is not a perfect number.\n",num);

    return 0;
    
}
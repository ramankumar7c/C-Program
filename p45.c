//Average of n numbers using while loop

#include<stdio.h>
int main ()
{
    int number,total,i=0,sum=0;
    float avg;
    printf("How many numbers : ");
    scanf("%d", &total);
    //Enter no of terms
    while(i<total)
    {
        printf("Enter the number : ");
        scanf("%d", &number);
        //Enter each number consecutively
        sum = sum+number;
        i=i+1;
    }
    avg = (sum)/total;
    printf("The average of %d numbers is %f",total,avg);
    return 0;
}
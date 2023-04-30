//print all numbers at interval of 3 between two given numbers

#include<stdio.h>
int main ()
{
    int i,a,b;
    printf("Enter start and end number in the series : ");
    scanf("%d%d", &a,&b);
    //Enter the numbers one after another
    for (i=a ; i<=b ; i+=3)
    printf("%d\t",i);
    return 0;
}
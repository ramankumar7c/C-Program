//Greatest number using conditional operators

#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &a,&b,&c);

    (a>b && a>c) ? printf("%d is greatest",a) : (b>a && b>c) ?  printf("%d is greatest",b) :  printf("%d is greatest",c);

    return 0;
}
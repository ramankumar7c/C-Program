//Length of a string

#include<stdio.h>
int main ()
{
    char a[20];
    int i=0;
    printf("Enter a atring : ");
    gets(a); //Enter the string
    
    while(a[i] != '\0')
    i++;
    printf("String Length = %d\n",i); //Length of the string will be displayed

    return 0;
}
//Reverse of a string

#include<stdio.h>
#include<string.h>
int main ()
{
    char str[40];
    printf("Enter a string to be reversed : ");
    scanf("%s",str); //Enter the string

    printf("Reverse of a string : %s",strrev(str)); //Reverse of string will be displayed

    return 0;
}
//Program to accept string and print a string

#include<stdio.h>
#include<string.h>
int main ()
{
    char str[10];
    int len,counter;
    printf("Enter a string : ");
    gets(str);

    //Enter the string which you want to print
    
    len = strlen(str);

    for(counter = 0; counter<len;counter++)
    printf("%c\n",str[counter]);

    return 0;
}
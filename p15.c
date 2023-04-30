//lowercase to uppercase

#include<stdio.h>
int main ()
{
    char ch;

    printf("Enter alphabet : ");
    scanf("%c", &ch);

    if(ch>='a'&&ch<='z')
    printf("Uppercase of entered alphabet is %c.",ch-32);

    else
    printf("Entered alphabet is not a lowercase alphabet.");

    return 0;
}
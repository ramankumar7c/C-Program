//Concatenation of two string

#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[100] = "KIIT", str2[100] = "University",str3[100];
    int i=0,j=0;

    printf("First String : %s\n",str1);
    printf("Second String : %s\n",str2);

    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    
    i=0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';

    printf("Concatenated String : %s",str3); //Concatenated string will be displayed

    return 0;
}
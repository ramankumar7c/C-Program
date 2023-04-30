//vowel or consonant

#include<stdio.h>
int main ()
{
    char ch;

    printf("Enter alphabet : ");
    scanf("%c", &ch);

    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')

    {
       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
       printf("Entered alphabet is a vowel.\n");

       else
       printf("Entered alphabet is a consonant.\n");
    }

    else
    printf("Entered character is not an alphabet.\n");

    return 0;
}
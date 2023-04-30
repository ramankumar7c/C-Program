//Grade system using switch case

#include<stdio.h>
int main ()
{
    int tm,avg;
    printf("Enter total marks secured : ");
    scanf("%d", &tm);

    avg = tm/10;

    switch(avg)
    {
        case 10 :
        case 9 : printf("Grade secured is O\n");break;
        case 8 : printf("Grade secured is E\n");break;
        case 7 : printf("Grade secured is A\n");break;
        case 6 : printf("Grade secured is B\n");break;
        case 5 : printf("Grade secured is C\n");break;
        case 4 : printf("Grade secured is D\n");break;
        case 3 : printf("Grade secured is F\n");break;
        default : printf("Fail\n");
    }
    return 0;
}
//Grades of student

#include<stdio.h>
int main ()

{
    int marks;

    printf("Enter marks : ");
    scanf("%d", &marks);

    if(marks>=90&&marks<=100)
    printf("Grades obtained is O.\n");

    else if(marks>=80&&marks<=89)
    printf("Grades obtained is E.\n");

    else if(marks>=70&&marks<=79)
    printf("Grades obtained is A.\n");

    else if(marks>=60&&marks<=69)
    printf("Grades obtained is B.\n");

    else if(marks>=50&&marks<=59)
    printf("Grades obtained is C.\n");

    else if(marks>=40&&marks<=49)
    printf("Grades obtained is D.\n");

    else
    printf("Grades obtained is F.\n");

    return 0;
}
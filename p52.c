//Menu driven program for Area

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int option,r,l,br,b,h;
    
    
    printf("Menu :-\n");
    printf("1 for Circle\n");
    printf("2 for Triangle\n");
    printf("3 for Rectangle\n");
    printf("4 for exiting menu.\n");
    
    while (1) 
    {
    printf("\nEnter option : ");
    scanf("%d", &option);

    switch (option)
    {
        case 1 : printf("Enter radius : ");
        scanf("%d", &r);
        printf("Area = %f",3.14*r*r);break;
        
        case 2 : printf("Enter base and height : ");
        scanf("%d%d", &b,&h);
        printf("Area = %f",0.5*b*h);break;

        case 3 : printf("Enter length and breadth : ");
        scanf("%d%d",&l,&br);
        printf("Area = %f",l*br);break;

        case 4 : exit(0);break;


    }}

    return 0;
}
//Area of different shapes

#include<stdio.h>
int main ()
{
    int type;
    float r,b,h,l,br;
    printf("Enter type of shape(1 for circle, 2 for triangle, 3 for rectangle) : ");
    scanf("%d", &type);

    switch(type)
    {
        case 1 : 
        {
            printf("Enter radius : ");
            scanf("%f", &r);
            printf("Area of circle = %f",3.14*r*r);break;
        }
        case 2 :
        {
            printf("Enter base and height : ");
            scanf("%f%f", &b,&h);
            printf("Area of triangle = %f",0.5*b*h);break;
        }
        case 3 :
        {
            printf("Enter length and breadth : ");
            scanf("%f%f", &l,&br);
            printf("Area of rectangle = %f",l*br);break;
        }
        default : printf("Not a valid type");
    }
}
//Roots of quadratic equation
#include<stdio.h>
#include<math.h>

int main ()
{
    float a,b,c,D,root1,root2,real,img;

    printf("Enter coefficient of x^2 : ");
    scanf("%f",&a);
    printf("Enter coefficient of x : ");
    scanf("%f",&b);
    printf("Enter constant term : ");
    scanf("%f",&c);

    if(a == 0 && b == 0)
    printf("Not a valid equation.\n");

    else
    {
        if(a == 0 && b != 0)
        {
            root1 = -c/b;
            root2 = -c/b;
            printf("Roots of equation are %f and %f.\n",root1,root2);
        }
     
        else
        {
            D = (b*b)-(4*a*c);
            if(D == 0)
            {
                root1 = -b/(2*a);
                root2 = -b/(2*a);

                printf("Roots of the equation are %f and %f.\n",root1,root2);

            }
    
            else
            {
                if(D > 0)
                {
                    root1 = (-b/(2*a))+(sqrt(D)/(2*a));
                    root2 = (-b/(2*a))-(sqrt(D)/(2*a));
                    printf("Roots of the equation are %f and %f.\n",root1,root2);
                }

                else
                {real = -b/(2*a);
                img = sqrt(-D)/(2*a);
                printf("Roots of the equation are %f+i%f and %f-i%f.\n",real,img,real,img);}

            }

                
                
        }



    }
    return 0;
}
//Add Distances

#include<stdio.h>
struct distances
{
    int km;
    float m;
}d1,d2,result;
int main ()
{
    printf("Enter 1st Distances : \n");
    printf("Enter Distance in km : ");
    scanf("%d",&d1.km);
    printf("Enter Distances in m : ");
    scanf("%f",&d1.m); //Enter 1st Distances

    printf("Enter 2nd Distances : \n");
    printf("Enter Distance in km : ");
    scanf("%d",&d2.km);
    printf("Enter Distances in m : ");
    scanf("%f",&d2.m); //Enter 2nd Distances

    result.km = d1.km + d2.km;
    result.m = d1.m + d2.m; //Distances will be added here
    
    while (result.m >= 1000)
    {
        result.m = result.m - 1000.0;
        result.km++;
    }

    printf("\nSum of Distances = %d km %0.2f m",result.km,result.m);
    return 0;
}
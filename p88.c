//Student Details

#include<stdio.h>
struct student
{
    char name[25];
    int roll;
    float marks;
};
int main ()
{
    int i,n;
    printf("Enter total no students : ");
    scanf("%d",&n);

    struct student s[n];
    printf("Enter Information of Students - \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the Roll No : ");
        scanf("%d",&s[i].roll);
        printf("Enter the Name of Student : ");
        scanf("%s",s[i].name);
        printf("Enter Marks Obtained : ");
        scanf("%f",&s[i].marks);
        printf("\n"); 
    }
    //Information of each student will be displayed here
    printf("Displaying Information of Students - \n");
    for(i=0;i<n;i++)
    {
        printf("Roll No : %d\t",s[i].roll);
        printf("Name of Student : %s\t",s[i].name);
        printf("Marks Obtained : %f\t",s[i].marks);
        printf("\n"); 
    }

    return 0;
}
//Books

#include<stdio.h>
#include<string.h>
struct books
{
    char name[100];
    long int isbn;
    float price;
};
int main ()
{
    struct books b[100];
    int i,j,n;
    long int temp;
    printf("Enter total no of books : ");
    scanf("%d",&n);
    printf("Enter Information of books :\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the Name of the Book : ");
        scanf(" %[^\n]",b[i].name);
        printf("Enter ISBN : ");
        scanf("%ld",&b[i].isbn);
        printf("Enter the price of the book : ");
        scanf("%f",&b[i].price);
    }
    //Details of each book is stored
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        if (b[j].isbn > b[j+1].isbn)
        {
           temp = b[j].isbn;
           b[j].isbn = b[j+1].isbn;
           b[j+1].isbn = temp;
        }  //Books wil be sorted according to ISBN
    }
    printf("Displaying Sorted List : \n");
    for (i = 0; i < n; i++)
    {
        printf("ISBN : %ld\t",b[i].isbn);
        printf("Name of Book : %s\t",b[i].name);
        printf("Price of Book : %f\t",b[i].price);
        printf("\n"); //Books Details will be shown here
    }
    return 0;
}

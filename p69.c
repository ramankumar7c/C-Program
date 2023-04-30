/* *******
   *** ***
   **   **
   *     *
   **   **
   *** ***
   *******  */

#include<stdio.h>
int main ()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j==4&&i>1&&i<7||i==4&&j>1&&j<7||i>2&&i<6&&(i+j==8||i==j))
            printf(" ");

            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
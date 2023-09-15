/*
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 0; i <=6; i++)
    {
        for ( j = 0; j <= i; j++)
        {
           printf(" *");
        }
        printf("\n");
    }

 return 0;  
}
*/
#include<stdio.h>
int main()
{
     int i,j,space;
     int rows;
     printf("\n Enter the rows");
     scanf("%d",&rows);
     for ( i = 0; i <=rows; i++)
     { 
         for ( space = 1; space <=rows-i; space++)
         {
           printf(" ");
         }
             for ( j = 0; j <=2*i; j++)
             {
             printf("*");
             }
     printf("\n");
     }

 return 0;  
}
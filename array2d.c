/*
#include<stdio.h>
int main()
 {
      int a[2][2],i,j;
     printf("\n Enter the element matrix");
         for ( i = 0; i <2; i++)
         {
             for ( j = 0; j < 2; j++)
             {
             scanf("%d",&a[i][j]);
             }
        
         }
         printf("\n matrix");
         for ( i = 0; i < 2; i++)
         {
             for ( j = 0; j <2 ; j++)
             {
             printf("\t %d",a[i][j]);
             }
             printf("\n");
         }     
 return 0;    
 }
 */
// addtion of 2D array
#include<stdio.h>
int main()
 {
     int a[2][2],i,j,b[2][2],c[2][2];
         printf("\n Enter the element matrix A: ");
         for ( i = 0; i <2; i++)
         {
             for ( j = 0; j < 2; j++)
             {
             scanf("%d",&a[i][j]);
             }
        }

         printf("\n Enter the element matrix B: ");
         for ( i = 0; i < 2; i++)
         {
             for ( j = 0; j <2 ; j++)
             {
              scanf("%d",&b[i][j]);
             }
             printf("\n");
         }

      
         for ( i = 0; i < 2; i++)
         {
             for ( j = 0; j <2 ; j++)
             {
               c[i][j]=a[i][j]+b[i][j];
             }
           
         }
          printf("\n Enter the element matrix C: \n");
         for ( i = 0; i < 2; i++)
         {
             for ( j = 0; j <2 ; j++)
             {
               printf("\t %d",c[i][j]);
             }
               printf("\n");
         }


 return 0;    
 }
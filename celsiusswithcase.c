#include<stdio.h>>
int main()
{
     int a,b,cel,fah,i;
     
     printf("\n press 1 for convert far to cel:");
     printf("\n press 2 for  cel to far");
    
     printf("\n Enter the choice");
     scanf("%d",&i);
    

         switch(i)
         {
             case 1:
              printf("the temperature is in fahr:");
              scanf("%d",&a);
             cel=a-32/1.8;
             printf("the temperature is in celsius %d",cel);
             break;

             case 2:
             printf("the temperature is in cel:");
             scanf("%d",&b);
             fah=b*1.8+32;
             printf("the temperature is in fahr %d",fah);
             break;
        
        
              default: printf("\n wrong input");
              break;
         }



return 0;
}
//wap  to check wheather a number is divisible according to the following condition 1.no is divisible by 8 and 5 2.no. is divisible by 8

#include<stdio.h>
int main()
{
      int num;
      printf("enter the number:");
      scanf("%d",&num);

         if(num%8==0 && num%5==0)
         {
            printf("the number is divisible by 8 and 5");
         }
             else if(num%8==0)
             {
                printf("the number is divisible by 8");
             }
                 else if(num%5==0)
                 { 
                   printf("the number is divisible by 5");
                 }
        else
        {
            printf("the number is neighter divisible by 5 nor 8");
        }         

return 0;
}
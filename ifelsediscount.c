#include<stdio.h>
int main()
{
   int total,discount,purchase;
   printf("\n Enter the purches amount:");
   scanf("%d",&purchase);

   if(purchase>1500)
   {
   total=purchase-200;//we calculate the discount amount
   printf("total amout is%d",total);

   }
   else
   {
    printf("you wont get any discount");
   }
    return 0;
}
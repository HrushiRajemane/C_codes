#include<stdio.h>
   int main()
   {
    int sale,com;
    printf("\n Enter the your sale amount");
    scanf("%d",&sale);

    if(sale>1000)
    {
     com=(15*sale)/100;//formula for percentage
     printf("\n %d you will get commision on this",com);

    }
    else
    {
     printf("you wont get any commision");
    }


    return 0;
   }
// armstrong without retrun without parameter

#include<stdio.h>
void arm();
int main()
{
    arm();
}
void arm(void)
{
    int r,num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int temp=num;
    while (num !=0)
    {
       r=num%10;
       sum=sum+r*r*r;
       num=num/10;
    }
    if (sum==temp)
    {
        printf("\n Its a armstrong");
    }
    else
    {
        printf("\n its not a armstrong");
    }
    
    
}
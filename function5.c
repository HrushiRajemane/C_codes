//find prime number using without parameter without return
/*
#include<stdio.h>
void prime();
int main()
{
    prime();
}
void prime(void)
{
    int num,i,count=0;
    printf("enter any number");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
        if(num%i==0)
        {
        count++;
        }
    }
    if (count>2)
    {
        printf("\n The number is not prime");
    }
    else
    {
        printf("\n The number is prime");
    }
    
}
*/

//without return with parameter/argument
/*
#include<stdio.h>
void prime();
int main()
{
    int num;
    printf("\n Enter any number:");
    scanf("%d",&num);
    prime(num);
    return 0;
}
void prime (int num)
{
    int i,count=0;
    for ( i = 2; i <=num; i++)
    {
        if(num%i==0)
        {
        count++;
        }
    }
    if (count>2)
    {
        printf("\n The number is not prime");
    }
    else
    {
        printf("\n The number is prime");
    }
 
}
*/

// prime number using with return with arguemunt 

#include<stdio.h>
int prime(int);
int main()
{
    int num, Isprime;
    printf("enter any number");
    scanf("%d",&num);
    Isprime = prime(num);

    if(Isprime==1)
    {
        printf("\n The number is  prime");
    }
    else
    {
        printf("\n The number is not prime");
    }

}
int prime (int n)
{
    int i,count=0;
    for ( i = 2; i <=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }
      if (count ==1)
      {
        return 1;
      }
      else
      {
        return 0;
      }
      
    
}
// factorial using without return without parameter
/*
#include<stdio.h>
void fact();
int main()
{
    fact();
}
void fact(void)
{
    int num,i,fact=1;
    printf("\n Enter the number");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    
}
*/
// factorial with return without parameter/argument

#include<stdio.h>
int fact(void);
int main()
{
    int a;
    a=fact();
    printf("\n %d",a);
}
    
int fact(void)
{
    int i,fact=1,n;
    printf("Enter any number");
    scanf("%d",&n);
    
    for ( i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}

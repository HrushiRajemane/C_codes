//with return without argument

#include<stdio.h>
int add(void);
int main()
{
    int ans;
    ans=add();
    printf("%d",ans);
}
int add(void)
{
    int a,b,c;
    a=10,b=40;
    
    c=a+b;
    return c;
}
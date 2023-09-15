//without return with parameter

#include<stdio.h>
void add(int,int);
int main()
{
    int a,b;
    printf("\n Enter 2 numbers ");
    scanf("%d%d",&a,&b);
    add(a,b);

}
void add (int x,int y)
{
    printf("Addition=%d",x+y);
}


// swap the values using function
//without return without argument
#include<stdio.h>
int swap (int *,int *);
int  main()
{
    int a=10,b=20,c;
    printf("\n A: %d B: %d",a,b);
    c=swap(&a,&b);
    printf("\n A: %d B: %d",a,b);
}
int swap(int *x,int *y)
{
    
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

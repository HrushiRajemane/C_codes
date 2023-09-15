#include<stdio.h>
 int main()
 {
  int a,b,temp;
  printf("Enter the two numbers a and b");
  scanf("%d,%d",&a,&b);
  temp=a;
  a=b;
  b=temp;
  printf("\n after variable a=%d b=%d ",b,a);
  

    return 0;
 }
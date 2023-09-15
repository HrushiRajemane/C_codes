#include<stdio.h>
 int main()
 {
     int a=5;
     float b;
     char c;
     double d;

printf("%d", sizeof(a));
printf("\n size of char=%zu byte", sizeof(b));
printf("\n size of float=%zu byte", sizeof(c));
printf("\n size of double=%zu byte", sizeof(d));


    return 0;
 }
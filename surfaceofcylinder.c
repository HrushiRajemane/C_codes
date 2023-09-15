#include<stdio.h>
int main()
{
 const float pi=3.14;
       float r,h,area;
 
printf("\n enter the value of circle:");
scanf("%f%f",&r,&h);
area=(2*pi*r*h)+(2*pi*r*r);
printf("\n surface of cylinder is %f\n",area);



    return 0;
}
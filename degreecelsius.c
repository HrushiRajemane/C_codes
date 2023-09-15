#include<stdio.h>
int main()
{
float c,f;
printf("\n Enter the temperature:");
scanf("%f%f",&c,&f);
c=((f-32)/(1.8));
f=(1.8*c)+32;
printf("\n temp is c=%f",c);
printf("\n temp is f=%f",f);



    return 0;
}
//celsius=((fahrenheit-32)/(1.8))
//fahrenheit=(1.8*celsius)+32
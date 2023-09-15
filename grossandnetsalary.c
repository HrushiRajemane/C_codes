#include<stdio.h>
int main()
{
int bs=5000,hra=1250,da=2000,ta=1500,pf=1000;
int gs;
int ns;
gs=bs+hra+da+ta+pf;
printf("\n %d",gs);
ns=gs-da;
printf("\n %d",ns);




    return 0;
}//gross salary=basic salary+HRA+other allowences
//net salary=gross salary-deduction
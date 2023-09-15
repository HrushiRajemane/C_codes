#include <stdio.h>
  int main()
  {
    float s,p,n,r;
    printf("enter the p value:");
    scanf("%f",&p);

    printf("enter the n value:");
    scanf("%f",&n);

    printf("enter the r value:");
    scanf("%f",&r);

    (s=p*n*r)/100;
    printf("\n result:%f",s);



    return 0;
  }
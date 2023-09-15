#include<stdio.h>
int main()
/*{
  int n,a,b,c,d,sum=0;
  printf("\n Enter any 4 digit no:");
  scanf("%d",&n);
  a=n/1000;
  b=n/100%10;
  c=n/10%10;
  d=n%10;
  sum=a+b+c+d;
  printf("\n sum of indivisual digit is %d",sum);

return 0;
}*/


{

int n,a,b,c,d,sum=0;
  printf("\n Enter any 4 digit no:");
  scanf("%d",&n);
  int rev=0;
  a=n/1000;
  b=n/100%10;
  c=n/10%10;
  d=n%10;
  a*1000+b*100+c*10+d*1;
  rev=d*1000+c*100+b*10+a*1;
  printf("\n %d",rev);
return 0;

}
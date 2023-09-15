// reverse string
#include<stdio.h>
#include<string.h>
int main()
{
  int i,n;
  char str[20];
  printf("\n Enter any string:");
  gets(str);
  n=strlen(str);
  printf("\n Reversed string :");
  for ( i =n-1; i>=0; i--)
  {
    printf("%c",str[i]);
  }
  
return 0;
}
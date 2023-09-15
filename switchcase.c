#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    

    switch(ch)
    {
             case 'a':
             case 'e':
             case 'i':
             case 'o':
             case 'u':
             printf("enterd alphabet %c is vowel",ch);
            break;
      default:printf("enterd alphabet %c is consonent",ch);
      break;
    }
}

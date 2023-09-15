#include<stdio.h>
int main()
{int i,n,max;
    int a[50];
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the element of arry:");
     for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    printf("\n array is:");
    for ( i = 0; i < n; i++)
    {
        printf("\t %d",a[i]);
    }
    max=a[0];
    for ( i = 1; i < n; i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        }
    }
     printf("\n greater element is:%d",max);

  return 0;  
}
// 1 dimensioanl array

/* 
#include<stdio.h>
int main()
{
    int i;
    int arr[5]={1,2,3,4,5};
    for ( i = 0; i < 5; i++)
    {
        printf("\n %d",arr[i]);
    }

  return 0;  
}
*/
// find the array what you want

#include<stdio.h>
int main()
{
    int i,n,k;
    int a[50];
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the element of arry:");
     for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    printf("array is:");
    for ( i = 0; i < n; i++)
    {
        printf("\n %d",a[i]);
    }
    printf("Enter the index which you want to print:");
    scanf("%d",&k);
    printf("the number is:");
   for ( i = 0; i < n; i++)

   if(i==k)
   {
    printf("\n %d",a[i]);
   }

  return 0;  
}


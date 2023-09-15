#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("\n Enter the Number for a,b,c,d and e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>b)
    {
        if(a>c)
        {

           if(a>d)
           {
                 if(a>e)
                 {
                 printf("\n a is greater than e.");
                 }
                 else
                 {
                 printf("\n e is greater.");
                 }
           }
           else
           {
                 if(d>e)
                 {
                 printf("\n d is greater than e");
                 }
                 else
                 {
                 printf("\n e is greater");
                 }
           }
        }
        else
        {
              if(c>d)
             {
                     if(c>e)
                    {
                     printf("\n c is greater than e");
                     }
                     else
                     {
                     printf("\n e is greater");
                     }
             }
             else
             {
                     if(d>e)
                    {
                     printf("d is greaterthan e");
                     }
                     else
                    {
                   printf("e is greater");
                    }
             }
        }

    }
    else
    {
        if (b>c)
                {
                    if (b>d)
                    {
                        if(b>e)
                        {
                            printf("b is greater than e.");
                        }
                        else
                        {
                            printf("%d  e is greater.");
                        }
                    }
                    else
                    {
                        if (d>e)
                        {
                            printf("d is greater than e.");
                        }
                        else
                        {
                            printf("e is greater.");
                        }
                        
                    }
                    
                }
                else
                {
                    if (c>d)
                    {
                       if (c>e)
                       {
                           printf("c is greaterthan e.");
                       }
                       else
                       {
                           printf(" e is greater.");
                       }
                       
                    }
                    else
                    {
                        if (d>e)
                        {
                            printf("d is greater than e.");
                        }
                        else
                        {
                           printf("e is greater.");
                        }
                        
                    }
                    
                }
    }

}
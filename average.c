#include<stdio.h>
 int main()
 {
   int bio,maths,science,his,eng;
   float total,average,percentage;

   printf("\n enter the marks =");
   scanf("%d%d%d%d%d",&bio,&maths,&science,&his,&eng);
   total=bio+maths+science+his+eng;
   average = total / 5.0;
   percentage=(total/500.0)*100;

   printf("total marks=%2f\n",total);
   printf("average marks=%2f\n",average);
   printf("percentage marks=%2f\n",percentage);



    return 0;
 }/*formula=
 total=a+b+c+d+e;
    

 */
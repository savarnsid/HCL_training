#include <stdio.h>

int main()
{
   int num,sum=0;
   int i=0;
   while(i<10)
   {
    scanf("%d",&num);
     sum=sum+num;
     i++;
   }
   printf("sum=%d",sum);
   printf("average= %f",sum/10.0);
    
    return 0;
}
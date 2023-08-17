#include <stdio.h>

int main()
{
   int num;
   int check=0;
   scanf("%d",&num);
   for(int i=2;i<num;i++)
   {
    if(num%i==0)
    {
     check++;
     break;
    }
   }
   if(check>0)
   printf("not prime");
   else
   printf("prime");
    
    return 0;
}
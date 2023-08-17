#include <stdio.h>

int main()
{
   int num;
   int fact=1;
   scanf("%d",&num);
   for(int i=2;i<=num;i++)
   {
    fact=fact*i;
    
   }
   
   printf("factorial of %d = %d",num,fact);
  
    
    return 0;
}
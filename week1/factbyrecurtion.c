#include <stdio.h>
int fact(int n)
{
    if(n>1)
   return n*fact(n-1);
    else return 1;
}
int main()
{
   int num;
   scanf("%d",&num); 
   printf("factorial of %d = %d",num,fact(num));
  
    
    return 0;
}
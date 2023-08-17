#include <stdio.h>
#include<math.h>
int square(int n)
{
    return( n*n);
}
int main()
{
   int num; 
   scanf("%d",&num);
   int result=square(num);
   printf("%d",result);
   
    return 0;
}


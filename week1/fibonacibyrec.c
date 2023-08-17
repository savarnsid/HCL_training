#include <stdio.h>
#include<math.h>
int fib(int n)
{ static int n1=0,n2=1,n3;
     if(n>0){
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
        fib(n-1);
    
        }
}
int main()
{
   int num;
   scanf("%d",&num);
   printf("%d \n%d \n",0,1);
   fib(num-2);
    return 0;
}
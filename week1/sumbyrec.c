#include <stdio.h>
#include<math.h>
int sum(int n)
{ if(n>0){
   return n+ sum(n-1);}
   else
   return 0;


}
int main()
{
   int num;
   scanf("%d",&num);
   printf("%d",sum(num));
    return 0;
}
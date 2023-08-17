#include <stdio.h>
#include<math.h>
void printt(int n)
{ if(n>0){
   printf("%d ",50-n+1);
   printt(n-1);
}
}
int main()
{
   int num=50;
//    scanf("%d",&num);
    printt(num);
    return 0;
}
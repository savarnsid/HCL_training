#include <stdio.h>
#include<math.h>
static int sum=0,r=0;
int reverse(int n)
{
    if(n>0)
    {
     r=n%10;
    sum=sum*10+r;
    reverse(n/10);
    }
    else 

    return sum;
}
int main()
{
   int num;
   scanf("%d",&num);
    printf("reverse  of digit= %d",reverse(num));
   

    
    return 0;
}
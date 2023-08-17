#include <stdio.h>
#include<math.h>
int sum(int n)
{
    if(n!=0)
    {
        return n%10+sum(n/10);
    }
    else 
    return 0;
}
int main()
{
   int num;
   scanf("%d",&num);
    printf("sum of digit= %d",sum(num));
   

    
    return 0;
}
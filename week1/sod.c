#include <stdio.h>
#include<math.h>

int main()
{
   int num;
   int sum=0; 
   scanf("%d",&num);
   
   while(num>0){
    int r=num%10;
    sum=sum+r;
    num=num/10;
   }
   
    printf("sum of digit= %d",sum);
   

    
    return 0;
}
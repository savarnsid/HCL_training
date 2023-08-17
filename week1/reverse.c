#include <stdio.h>
#include<math.h>

int main()
{
   int num;
   int reverse=0; 
   scanf("%d",&num);
   
   while(num>0){
    int r=num%10;
    reverse=reverse*10+r;
    num=num/10;
   }
   
    printf("reverse of digit= %d",reverse);
   

    
    return 0;
}
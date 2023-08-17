#include <stdio.h>
void prime(int num){
printf("2\n");
    for(int i=3;i<=num;i++)
    {
int check=0;
    for(int j=2;j<i;j++)
   {
    if(i%j==0)
    {
     check++;
     break;
    }
   }
   if(check==0)
   printf("%d\n",i);
  
    
}}
int main()
{
   int num;
   scanf("%d",&num);
   printf("the prime numbers btw 1 to %d:\n",num);
   prime(num);
   
    return 0;
}
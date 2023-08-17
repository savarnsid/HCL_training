#include <stdio.h>
#include<math.h>

int main()
{
   int num;
   int nod=0;
   int sum=0; 
   scanf("%d",&num);
   int n=num;
   while(num>0){
    num=num/10;
    nod++;
   }
   num=n;
    printf("No of digit =%d\n",nod);
   for(int i=0;i<nod;i++)
   {
    int r=num%10;
    sum=sum+ (float)pow(r,nod);
    num=num/10;
   }
   num=n;
   printf("%d\n", sum);
   if(num==sum)
   printf("armmstring");
   else
   {
    printf("not armstrong");
   }

    
    return 0;
}
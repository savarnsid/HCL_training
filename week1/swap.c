#include <stdio.h>
#include<math.h>
void swap(int n, int m)
{
  int temp=n;
  n=m;
  m=temp;
}
int main()
{
   int num1, num2; 
   scanf("%d %d",&num1, &num2);
   printf("num1=%d\n num2=%d\n",num1, num2);
   swap(num1, num2);
   printf("num1=%d\n num2=%d",num1, num2);
   
   
    return 0;
}


#include <stdio.h>
#include<math.h>
void arth(int a, int b)
{
  printf("Sum = %d\n",a+b);
    printf("diff= %d\n",a-b);
    printf("product = %d\n",a*b);
    printf("div = %d\n",a/b);
}
int main()
{
   int num1, num2; 
   scanf("%d %d",&num1, &num2);
   arth(num1, num2);
   
   
    return 0;
}


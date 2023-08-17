#include<stdio.h>
void dec2bin(int num)
{
    int bin[8];
    int i=0;
    while(num>0)
    {
        bin[i]=num%2;
        num=num/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    dec2bin(num);

}
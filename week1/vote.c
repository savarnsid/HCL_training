#include<stdio.h>
int main(){
    printf("enter the age:");
    int age;
    scanf("%d",&age);
    if(age>=18)
    printf("eligible to vote");
    else
    printf("Not eligible to vote");
    return 0;
}
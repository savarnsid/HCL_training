#include <stdio.h>

int main()
{
    int hour, minute;
    printf("enter the no. of hours:");
    scanf("%d",&hour);
    printf("enter the no. of minute:");
    scanf("%d",&minute);
    printf("Total no of minutes=");
    printf("%d",hour*60+minute);
    

    return 0;
}
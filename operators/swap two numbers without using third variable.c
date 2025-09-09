#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your numbers:");
    scanf("%d %d",&a,&b);
    printf("your numbers are %d,%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nthe swapped numbers are %d %d",a,b);
    return 0;
    
}

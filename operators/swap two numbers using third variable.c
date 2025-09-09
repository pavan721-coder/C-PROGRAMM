#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter your numbers:");
    scanf("%d %d",&a,&b);
    printf("your numbers are %d,%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("the swapped numbers are %d %d",a,b);
    return 0;
    
}

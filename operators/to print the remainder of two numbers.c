#include<stdio.h>
int main()
{
    int a,b,remainder;
    printf("enter a number:");
    scanf("%d %d",&a,&b);
    remainder=a%b;
    printf("the answer is %d",remainder);
    return 0;
    
}

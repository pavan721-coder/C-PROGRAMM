#include <stdio.h>

int main()
{
    char a[100];
    int b;
    char c[100];
    printf("enter your door number:");
    scanf("%d",&b);
    printf("your door number is %d",b);
    printf("\ntype out your address:");
    scanf("%s",a);
    printf("your address is %d\n %s",b,a);
}
#include<stdio.h>
int main()
{
    int n1,first,last,sum;
    printf("enter a number:");
    scanf("%d",&n1);
    first=n1%10;
    last=n1/10;
    sum=first+last;
    printf("the answer is:%d",sum);
    
}

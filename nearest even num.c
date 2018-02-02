#include<stdio.h>
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the given number is even");
    }
    else
    {
        printf("the nearest even number is %d",a-1);
    }
}

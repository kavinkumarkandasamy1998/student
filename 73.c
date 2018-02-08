#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the limit of the number:");
    scanf("%d%d",&b,&c);
    if(a>=b&&a<=c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

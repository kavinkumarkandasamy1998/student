#include<stdio.h>
void main()
{
    int n,a,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
     a=n%10;
     bsum=sum+a;
     n=n/10;
     }
     printf("The sum number:%d",sum);
}

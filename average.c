#include<stdio.h>
void main()
{
    int a,i,sum=0;
    printf("enter the numbers:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    printf(" %d",i);    
    sum=sum+i;
    
    }
    printf("\nthe average of given number is %d",sum/a);
}

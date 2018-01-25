#include<stdio.h>
void main()
{
    int i,d,a=0,b=1,c;
    scanf("%d",&d);
    printf("%d %d ",a,b);
    for( i =2; i <d; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}

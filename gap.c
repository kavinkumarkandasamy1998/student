#include<stdio.h>
void main()
{
    int n,m,s=0,k=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
         s=s*10+m;
        n=n/10;
    }
    while(s>0)
    {
        k=0;
        k=s%10;
        printf("\t%d",k);
        s=s/10;
}
}

#include<stdio.h>
main()
{
int i,n,k,s=0,a[n];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<k;i++)
s=s+a[i];
printf("sum of 1st %d num is %d",k,s);
}

#include<stdio.h>
main()
{
int m,n,k,s=0,a[n];
scanf("%d%d",&n,&k);
for(m=0;m<n;m++)
scanf("%d",&a[m]);
for(m=0;m<k;m++)
s=s+a[m];
printf("sum of 1st %d num is %d",k,s);
}

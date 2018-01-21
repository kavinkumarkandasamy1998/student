#include<stdio.h>
void main()
{
int k,a[10],i,sum=0;
printf("Enter how many numbers \n");
scanf("%d",&k);
for(i=0;i<k;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
int median=sum/k;
printf("median is :%d\n",median);
 }

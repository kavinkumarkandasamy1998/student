#include <stdio.h>
int main(void) 
{
int a[1000],i,j,t,l;
printf("Enter the limit :");
scanf("%d",&l);
printf("\nEnter the series:");
for(i=0;i<l;i++)
scanf("%d",&a[i]);
for(i=0;i<l;i++)
{
for(j=0;j<l;j++)
{
if(a[i]>a[j])
{
t=a[j];
a[j]=a[i];
a[i]=t;
}	
}
}
printf("\n the result is :%d\t",a[l%2]);
return 0;
}

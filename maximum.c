#include<stdio.h>
int main()
{
int i,e, b[10]={1,2,3,4,5,6,7,8,9,},maxi;
printf("enter array term");
scanf("%d",&e);
maxi=b[0];
for(i=0;i<e;i++)
{
if(maxi<b[i])
maxi=b[i];
}
printf("%d",maxi);
}

#include<stdio.h>
void main()
{
int b,e,result=1;
scanf("%d",&b);
scanf("%d",&e);
while(e!=0)
{
result=result*b;
--e;
}
printf("%d",result);
}

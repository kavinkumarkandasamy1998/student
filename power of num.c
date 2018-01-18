#include<stdio.h>
void main()
{
int base,exp,result=1;
scanf("%d",&base);
scanf("%d",&exp);
while(exp!=0)
{
result=result*base;
--exp;
}
printf("%d",result);
}

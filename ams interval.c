#include <stdio.h>
int main(void)
{
int a,b,i,s,rem;
int sum=0;
scanf("%d\t%d",&a,&b);
for(i=a+1;i<b;i++)
{
s=i;
int x=i;
sum=0;
while(x>0)
{
rem=x%10;
sum=sum+rem*rem*rem;
x=x/10;
}
if(sum==s)
printf("%d",sum);
}
return 0;
}

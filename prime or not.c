#include <stdio.h>
int main(void)
{
int count=0,i,value;
printf("Enter the number:");
scanf("%d",&value);
for(i=2;i<value;i++)
{
if(value%i==0)
{
count++;
}
}
if(count==0)
printf("It is a prime number");
else
printf("Not a prime number");
return 0;
}

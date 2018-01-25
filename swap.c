#include<stdio.h>
int main()
{
int i,j,temp;
printf("enter two numbers:\n");
scanf("%d%d",&i,&j);
temp=i;
i=j;
j=temp;
printf("swap numbers are:%d %d",i,j);
return 0;
}

#include<stdio.h>
int main()
{
char k[100],count=0,i;
gets(k);
for(i=0;k[i]!=NULL;i++)
{
if(k[i]==' ')
count++;
}
printf("%d",count);
return 0;
}

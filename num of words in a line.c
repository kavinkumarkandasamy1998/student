#include<stdio.h>
int main()
{
char m[32],count=0,i;
gets(m);
for(i=0;m[i]!=NULL;i++)
{
if(m[i]==' ')
count++;
}
printf("%d",count+1);
return 0;
}

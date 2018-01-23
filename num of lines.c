#include<stdio.h>
int main()
{
char k[1000],line=0,i;
gets(k);
for(i=0;k[i]!=NULL;i++)
{
if(k[i]=='.' || k[i]=='\n' ||k[i]=='\t')
line++;
}
printf("%d",line+1);
return 0;
}

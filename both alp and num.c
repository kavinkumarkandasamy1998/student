#include <stdio.h>
void main() 
{
	char s[1000];
	int c=0,a=0,i;
	gets(s);
  for(i=0;s[i]!='\0';i++)
	{
	if((s[i]>='0')&&(s[i]<='9'))
  c++;
  if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
  a++;
	}
	if(c>=1&&a>=1)
	{
	    printf("Yes");
	}
	else
	{
	    printf("No");
	}
	
}

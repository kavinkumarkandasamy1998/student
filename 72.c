#include <stdio.h>
int main(void) 
{
char string[50];
int i=0,f=0;
printf("\n enter the given string:");
scanf("%s",string);
while(string[i]!='\0')
{
if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
f=1;
i++;
}
if(f==1)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}

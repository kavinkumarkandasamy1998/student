#include<stdio.h>
#include<conio.h>
void main()
{
int w=0,i;
int c=0;
char str[20];
printf("Enter string : ");
gets(str);
for(i=0; str[i]!=NULL; i++)
{
c++;
if(str[i]==' ')
w++;
}
printf("\nNumber of characters in string : %d",c);
printf("\nNumber of words in string : % d",w+1); 
getch();
}

#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
printf("enter the character:");
scanf("%s",&a);
strcpy(b,a);
strrev(b);
if((a,b)==0)
{
    printf("palindrome");
}
else
{
    printf("not palindrome");
}
}

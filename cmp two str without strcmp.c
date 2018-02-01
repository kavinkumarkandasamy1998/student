#include<stdio.h>
void main()
{
int c,d;
char a[20],b[30];
printf("enter the first string:");
scanf("%s",&a);
printf("enter the second string:");
scanf("%s",&b);
c=strlen(a);
d=strlen(b);
if(c>d)
{
printf("%s",a);
}
else if(c<d)
{
printf("%s",b);

}
else
{
printf("%s%s",a,b);
}
}

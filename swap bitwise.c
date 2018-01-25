#include<stdio.h>
void main()
{
  int a,b;
  scanf("%d,%d",&a,&b);
  printf("Before swapping\nthe value of a=%d,b=%d\n",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("After swapping\nthe value of a=%d,b=%d",a,b);
}

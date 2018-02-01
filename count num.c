#include<stdio.h>
int main()
{
  int k,rem,s,i,count=0;
  printf("enter the number");
  scanf("%d",&k);
  while(k!=0)
  {
    rem=k%10;
    s=s+rem;
    k=k/10;
    count++;
  }
  printf("the total no digits is %d",count);
  return 0;
}

#include <stdio.h>
int main(void)
{
 int n,r,q;
 scanf("%d",&n);
 r=n%10;
 q=n/10;
 if(n<=10000)
 {
 if(n<=10)
 {
   printf("10");
 }
 else
 {
 if(r<5)
 {
   printf("%d",q*10);
 }
 else
 {
   printf("%d",(q+1)*10);
 }
 }
 }
  return 0;
}

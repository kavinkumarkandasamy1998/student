#include<stdio.h>
int main()
{
  int a[10],k,n,high,low;
  printf("enter the total number of elements in an array");
  scanf("%d",&n);
  printf("enter the numbers");
  for(k=0;k<n;k++)
  {
  scanf("%d",&a[k]);
  }
  high=a[0];
  for(k=1;k<n;k++)
  {
      if(high<a[k]) 
      {
        high=a[k];
      }
  }
  low=a[0];
  for(k=1;k<n;k++)
  {
      if(low>a[k]) 
      {
        low=a[k];
      }
  }
    printf("the smallest element is %d\n",low);
    printf("the largest element is %d",high);
    return 0;
    
  }

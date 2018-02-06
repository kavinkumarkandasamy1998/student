#include<stdio.h>
void main()
{
    int a[20],i,g;
    printf("enter 10 elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=g;
    for(i=0;i<10;i++)
    {
        if(a[i]>g)
        {
            g=a[i];
        }
    }
    printf("the largest element is %d",g);
}

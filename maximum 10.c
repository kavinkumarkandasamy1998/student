ines (19 sloc)  331 Bytes
#include<stdio.h>
void main()
{
    int a[20],i,great;
    printf("enter 10 elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=great;
    for(i=0;i<10;i++)
    {
        if(a[i]>great)
        {
            great=a[i];
        }
    }
    printf("the largest element is %d",great);
}

#include<stdio.h>
void main()
{
    int i,a[10],j;
    for(i=0;i<10;i++)
         scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        for(j=1;j<=a[i];j++)
             printf("=");
        printf("\n");
    } 
}
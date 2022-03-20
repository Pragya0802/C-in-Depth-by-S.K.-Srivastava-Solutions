#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i%3==0)
        {
            printf("%d -> %d\n",i,i*i*i);
        }
        
    }
}
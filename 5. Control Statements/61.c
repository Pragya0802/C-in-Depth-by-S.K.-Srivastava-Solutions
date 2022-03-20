#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter n  : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2!=0)
                printf(" *");
            else
                printf("* ");
        }
        printf("\n"); 
    }
}
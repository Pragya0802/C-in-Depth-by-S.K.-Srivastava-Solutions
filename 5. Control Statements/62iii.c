#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i)
                printf("\\");
            else if(j==n-i-1)
                 printf("/");
            else
                printf("*");
        }
        printf("\n");
    }
}
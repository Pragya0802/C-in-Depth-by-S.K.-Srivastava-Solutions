#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s=0,f=0;
    printf("Enter no. of terms you want to add : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {    s=s*10+1;
         f=f+s;
    }
    printf("%d",f);
}
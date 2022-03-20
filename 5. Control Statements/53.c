#include<stdio.h>
void main()
{
    int n,c=0,s,r;
    printf("Enter the number");
    scanf("%d",&n);
    r=n;
    if(n==0)
        printf("Total number of digits in %d = 1",r);
    else 
    {   while(n!=0)
       {
            n=n/10;
            c=c+1;
        }
         printf("Total number of digits in %d = %d",r,c);
    }
}
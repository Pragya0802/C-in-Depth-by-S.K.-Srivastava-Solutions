#include<stdio.h>
void main()
{
    int n,s,r,t;
    printf("enter a number : ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==t)
         printf("%d is Palindrome",s);
    else
        printf("%d is not Palindrome",t);
}
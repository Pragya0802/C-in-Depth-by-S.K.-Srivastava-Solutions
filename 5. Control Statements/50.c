#include<stdio.h>
void main()
{
    int n,r,s;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("reversed number = %d\n",s);
    printf("Double of a reverse numbre = %d",2*s);
}
#include<stdio.h>
void main()
{
    int n,c=0,s,r,t;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter a digit to check its frequency");
    scanf("%d",&r);
    t=n;
    while (n!=0)
    {
        /* code */
        s=n%10;
        if(r==s)
            c++;
        n=n/10;
    } 
    printf("%d is present %d times in %d",r,c,t);
}
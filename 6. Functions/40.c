#include<stdio.h>
void table(int);
void main()
{
    int n;
    printf("Enter a number to find its table\n");
    scanf("%d",&n);
    printf("******************************************\n");
    table(n);
}
void table(int n)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}

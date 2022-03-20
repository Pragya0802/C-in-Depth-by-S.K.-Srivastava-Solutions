#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,i;
    float s=0,t=1;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter the no. of terms you want to add : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(pow(x,i)*t);
        t=t*(-1);
    }
    printf("%f ",s);
}
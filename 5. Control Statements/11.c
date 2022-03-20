#include<stdio.h>
void main()
{
    int x,y=0;
    printf("Enter x ");
    scanf("%d",&x);
    if(x==0)
        y++;
    else if(x>0)
        y--;
    else
        y+=2;    
}

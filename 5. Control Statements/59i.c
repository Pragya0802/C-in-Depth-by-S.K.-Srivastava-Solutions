/* Find the sum of these series up to n terms where x is an integer entered by user. 
1 + 11 + 111 + 1111 + ..........  */ 
#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s=0,f=0;                           //initializing variable
    printf("Enter no. of terms you want to add : ");
    scanf("%d",&n);                            //taking input
    for(i=0;i<n;i++)                           //loop for addition
    {  
        s=s*10+1;
        f=f+s;
    }
    printf("%d",f);
}

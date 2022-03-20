/* Write a program to enter a number and find the reverse of that number. Also display the double of the reverse */
#include<stdio.h>
void main()
{
    int n,r,s;                                  //initializing variable
    printf("Enter a number : ");      
    scanf("%d",&n);                             //taking input
    while(n>0)                                   
    {
        r=n%10;                                  //extracting last digit
        s=s*10+r;                                //adding last digit to a new variable
        n=n/10;                                  // making changes in original number
    }
    printf("reversed number = %d\n",s);           //printing the reverse number
    printf("Double of a reverse numbre = %d",2*s); // printing te double of reverse number
}

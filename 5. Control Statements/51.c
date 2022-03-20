/* Write a program to find whether a number is palindrome or not. */
/* Palindrome number ->  palindrome number is a number (such as 16461) that remains the same when its digits are reversed.*/
#include<stdio.h>
void main()
{
    int n,s,r,t;                              //initializing variable
    printf("enter a number : ");              
    scanf("%d",&n);                           //asking for input
    t=n;                                      //storing original number into new variable for future use
    while(n>0)
    {
        r=n%10;                               //extracting last digit
        s=s*10+r;                             //adding last digit to a new variable to form reverse number 
        n=n/10;                               //making changes in original number
    }
    if(s==t)                                  //checking reverse numver is equal to original number.
         printf("%d is Palindrome",t);
    else
        printf("%d is not Palindrome",t);
}

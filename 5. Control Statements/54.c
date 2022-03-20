/* Input a number and a digit, and count the number of times the digit occurs in the number. */
#include<stdio.h>
void main()
{
    int n,c=0,s,r,t;                                //initializig variables
    printf("Enter the number");             
    scanf("%d",&n);                                 //taking input for number
    printf("Enter a digit to check its frequency");
    scanf("%d",&r);                                  //taking input for digit
    t=n;                                            //storing variable for future use
    while (n!=0)
    {
        s=n%10;                                      //extracting last digit
        if(r==s)
            c++;
        n=n/10;                                        //making changes in original number
    } 
    printf("%d is present %d times in %d",r,c,t);
}

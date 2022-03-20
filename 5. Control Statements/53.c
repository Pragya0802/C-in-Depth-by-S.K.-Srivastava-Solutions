/* Write a program to input a number and count the digits in it. Use while loop and the program should work correctly for 0 also. */
#include<stdio.h>
void main()
{
    int n,c=0,s,r;                                  //initializing variable
    printf("Enter the number");
    scanf("%d",&n);                                 //taking input
    r=n;                                            //storing original number to a new variable
    if(n==0)                                
        printf("Total number of digits in %d = 1",r);
    else 
    {   while(n!=0)
       {
            n=n/10;                                     //extracing last digit
            c=c+1;                                      //flag variable
        }
         printf("Total number of digits in %d = %d",r,c);
    }
}

/* Write a function prodDigits() that inputs a number and returns the product of digits of that number. */
#include<stdio.h>
int prodDigits(int);       //Function Prototype
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);        //taking input
    printf("Product of the digits = %d",prodDigits(n));     //Function call and printing the output
}
int prodDigits(int n)       
{
    int r,pod=1;
    while(n!=0)
    {
        r=n%10;       //extracting the last digit
        pod=pod*r;    //multiplying the las digit
        n=n/10;       //making changes in original number
    }
    return pod;       // returning product of digits
}

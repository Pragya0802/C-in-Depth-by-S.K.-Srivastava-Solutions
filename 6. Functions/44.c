/* Write a function sumPdivisors () that finds the sum of proper divisors of a number. Proper divisors of a number are those
numbers by which the number is divisible, except the number itself. For example proper divisors of 36 are 1,2,3,4,6,9,12,18. */
#include<stdio.h>
int sumPdivisors(int);           //Function Prototype
void main()
{
     int n;                  //Initializing variable
     printf("Enter a number ");
     scanf("%d",&n);         //taking input
     printf("Sum of divisors of %d = %d",n,sumPdivisors(n));
}
int sumPdivisors(int n)
{
    int sum=1;               //initializing variable under sumPdivisors Function
    for(int i=2;i<n;i++)     //Loop for finding divisors
    {
        if(n%i==0)           //Checking the number 
        {   
             sum=sum+i;       //Adding sum of the divisors
        }
    }
    return sum;            // returning sum
}

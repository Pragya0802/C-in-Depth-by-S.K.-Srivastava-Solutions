/* Write a program to accept any number n and print the sum of square of all numbers from I to n. */ 
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a limit");
    scanf("%d",&n);                      //taking input for n
    for(i=1;i<=n;i++)
    {
        printf("Square of %d -> %d\n",i,i*i);        //printing the square
    }
}

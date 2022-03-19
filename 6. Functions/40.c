/* Write a function that inputs a number and prints the multiplication table of that number. */
#include<stdio.h>
void table(int);         //function prototype
void main()
{
    int n;
    printf("Enter a number to find its table\n");
    scanf("%d",&n);      //asking for a input
    printf("******************************************\n");
    table(n);            //Function Call
}
void table(int n)
{
    for(int i=1;i<=10;i++)    //Loop to print the table
    {
        printf("%d x %d = %d\n",n,i,n*i);     
    }
}

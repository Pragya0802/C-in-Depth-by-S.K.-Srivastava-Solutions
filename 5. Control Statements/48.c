/* Write a program to enter 10 numbers ranging from 1 to 50, draw a histogram by displaying adjacent '=' signs for each number entered. 
For example if the number entered is 12 then a line of 12 equals to sign should be displayed. */ 
#include<stdio.h>
void main()
{
    int i,a[10],j;                  //initializing variables and array of 10 elements
    for(i=0;i<10;i++)               //loop for taking input
         scanf("%d",&a[i]);         // taking input
    for(i=0;i<10;i++)               // loop for numbers
    {
        for(j=1;j<=a[i];j++)         // loop for printing equals to sign
             printf("=");
        printf("\n");
    } 
}

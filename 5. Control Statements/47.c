/* Write a program to input 10 numbers and find the largest number. */
#include<stdio.h>
void main()
{
    int i,a[10],max=0;                    //initializing array of 10 elements
    printf("Enter 10 number");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);                 //taking input
    for(i=0;i<10;i++)                      //loop for finding maximum number
    {
        if(a[i]>max)
             max=a[i];
    }
    printf("max = %d",max);                 //printing max elements
}

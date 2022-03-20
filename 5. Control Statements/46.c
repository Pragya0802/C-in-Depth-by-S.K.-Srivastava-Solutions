/* Write a program to print numbers from 1 to 80 separated by tab, 8 characters per line. */
#include<stdio.h>
void main()
{
    int i;                    //initializing variable
    for(i=1;i<=80;i++)        //Loop to print numbers
    {
        printf("%d\t",i);     // printing numbers
        if(i%8==0)            // Checking condition for next line
            printf("\n");
    }
}

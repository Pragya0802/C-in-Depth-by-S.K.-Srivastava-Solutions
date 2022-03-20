/* Write a program to accept any number n and print the cube of all numbers from 1 to n which are divisible by 3. Rewrite the program using a continue statement. */
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i%3==0)
        {
            printf("%d -> %d\n",i,i*i*i);
        }
        
    }
}

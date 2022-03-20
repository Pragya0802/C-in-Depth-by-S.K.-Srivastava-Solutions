/* Write a program to find out the value of x raised to the power y, where x and y positive integers. */
#include<stdio.h>
#include<math.h>
void main()
{
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    printf("%f",pow(x,y));
}

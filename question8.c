// Write a program to count the digits in a number.
#include<stdio.h>
void main()
{
    int num,n,rem,a=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    n=num;
    while (num)
    {
        num=num/10;
        a++;
    }
    printf("The Number of digits in %d is %d.",n,a);
}
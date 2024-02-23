// Write a program to get the sum of digits in a number. Example 12345, sum=1+2+3+4+5=15
#include <stdio.h>
void main()
{
    int num, n, result = 0, rem;
    printf("Enter Number: ");
    scanf("%d", &num);
    n = num;
    while (num)
    {
        rem = num % 10;
        result += rem;
        num = num / 10;
    }
    printf("The sum of %d digits is %d",n,result);
}
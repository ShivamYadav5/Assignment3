// Write a program to find if the number is Armstrong or not. Example: 1634 (1^4 + 6^4 + 3^4 +4^4 = 1 + 1296 + 81 + 256 = 1634).
#include <stdio.h>
#include<math.h>
void main()
{
    int num, n, result = 0, i = 0;
    printf("Enter Your Number: ");
    scanf("%d", &num);
    n = num;
    int num1 = num;
    // counting the number.
    while (num1)
    {
        num1 = num1 / 10;
        i++;
    }
    while(num)
    {
        static int rem;
        rem = num % 10;
        num = num / 10;
        result += pow(rem,i);
    }
    if (result == n)
    {

        printf("%d is an armstrong number.", n);
    }
    else
    {
        printf("%d is not an armstrong number.", n);
    }
}
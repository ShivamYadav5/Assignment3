// Use a while loop to print even numbers up to 20.
#include <stdio.h>
void main()
{
    int num = 1, result;
    while (result < 20)
    {
        result = 2 * num;
        printf("%d ", result);
        num++;
    }
}
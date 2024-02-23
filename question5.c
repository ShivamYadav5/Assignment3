// Use a do-while loop to check if a user's input is an even number, prompting them to re-enter if not.
#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("Enter Number: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("%d is an Even Number.", num);
            break;
        }
        else
        {

            printf("You Enter an Odd Number.\nEnter Again.\n");
        }

    } while (num % 2 != 0);
}
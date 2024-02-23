// Create a for loop to print the multiplication table of a given number.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number whose multiplication table you want: ");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d * %d = %d\n",num,i+1,(i+1)*num);
    }
    
}
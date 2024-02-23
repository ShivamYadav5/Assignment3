// Program to reverse the number. Example 321 -> 123, 1234 -> 4321

#include<stdio.h>
void main()
{
    int n,num,rem,result=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    n=num;
    while(num)
    {
        rem=num%10;
        num=num/10;
        result=result*10+rem;
    }
    printf("Reverse Number of %d is %d",n,result);
}
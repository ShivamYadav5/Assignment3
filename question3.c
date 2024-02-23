// Write a program that uses a for loop to calculate the sum and average of an array of integers.

#include<stdio.h>
// #include<stdlib.h>
void main()
{
    int num,sum=0;
    float avg;
    int arr[]={10,20,30,40,50};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        sum = sum + arr[i];
    }
    avg=(float)sum/len;
    printf("sum = %d\n",sum);
    printf("average = %.2f\n",avg);
}
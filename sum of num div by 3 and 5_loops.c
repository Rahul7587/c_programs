/*This program calculates the sum of the numbers 
  divisible 3 and 5 ,till the given number*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int num,i,total_sum=0,x;
    printf("Enter the number :");
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        x=i;
        if (x%15==0)
        {
            total_sum=total_sum+x;            
        }
    }
    printf("Sum of all the numbers divisible by both 3 and 5 is %d",total_sum);
    return 0;
}
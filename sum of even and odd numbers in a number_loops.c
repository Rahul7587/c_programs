/*This program helps in calculating the sum of even and odd numebers 
  in a given number*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int num,sum_even=0,sum_odd=0,current_digit;
    printf("Enter a number :");
    scanf("%d",&num);
    while (num>0)
    {
        current_digit=num%10;
        if (current_digit%2==0)
        {
            sum_even=sum_even+current_digit;
        }
        else
        {
            sum_odd=sum_odd+current_digit;
        }
        num=num/10;
    }
    printf("Sum of even digits :%d\nSum of odd digits :%d",sum_even,sum_odd);
    return 0;
}
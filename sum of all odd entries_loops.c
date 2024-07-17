/*This program calculates the sum of odd numbers in the given inputs*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int num,total_sum=0;
    do
    {
            printf("Enter a number (Enter 0 if you are done with the entries) :");
            scanf("%d",&num);
            if (num!=0 && num%2!=0)
            {
                total_sum=total_sum+num;
            }
            else if (num!=0 && num%2==0)
            {
                total_sum=total_sum;
            }
            else if (num==0)
            {
                printf("The total sum of all odd entries is %d",total_sum);
            }
            else
            {
                printf("ERROR...Please check your entries!");
            }
    } while (num>0);
    return 0;
}
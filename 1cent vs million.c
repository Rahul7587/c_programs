#include<stdio.h>
#include<stdlib.h>
int main() {
    int num_day,i;
    float total_amount=1,dollar;
    printf("Enter the number of days:");
    scanf("%d",&num_day);
    for (i=1;i<=num_day;i++)
    {
        total_amount=total_amount*2;
        /* printf("The total savings will be %d",total_amount); */
    }
    dollar=total_amount/100;
    printf("The total savings will be %f",dollar);
    return 0;
}
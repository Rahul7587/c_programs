#include<stdio.h>
int main() {
    /*sh-salary per hour,nh-no of hours,tspm-total salary for month */
    float sh,nh,tspm;
    printf("Welcome\nPlease enter your salary per an hour\n");
    scanf("%f",&sh);
    printf("Please enter the number of hours you worked in a month\n");
    scanf("%f",&nh);
    tspm=sh*nh;
    printf("Your total salary for this following month is %f\n Thank you",tspm);
    return 0;
}
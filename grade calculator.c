#include<stdio.h>
int main() {
    float g1,g2,g3,average;
    printf("Welcome to my grade calculator\nPlease enter your frist grade\n");
    scanf("%f",&g1);
    printf("Please enter your second grade\n");
    scanf("%f",&g2);
    printf("Please enter your thrid grade\n");
    scanf("%f",&g3);
    printf("Your average grade is %.f\nThank you for using my grade calculator",average=(g1+g2+g3)/3);
    return 0;
}
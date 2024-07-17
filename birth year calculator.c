#include<stdio.h>
int main() {
    int presentyear,age,birthyear;
    printf("Welcome to my Birth year calculator\nPlease enter the present year\n");
    scanf("%d",&presentyear);
    printf("Please enter your present age\n");
    scanf("%d",&age);
    birthyear=presentyear-age;
    printf("The year of your birth is \n%d \nThank you for using our calculator",birthyear);
    return 0;
}
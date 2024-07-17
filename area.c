#include<stdio.h>
int main() {
    float lenght,width;
    printf("Welcome to my area calculator\nPlease enter the lenght of the rectangle\n");
    scanf("%f",&lenght);
    printf("Please enter the width of the rectangle\n");
    scanf("%f",&width);
    printf("The area of the rectangle is \n%.1f\nThank you using my area calculator",lenght*width);
    return 0;   
}
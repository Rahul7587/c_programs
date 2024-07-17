#include<stdio.h>
int main() {
    float lenght,width,perimeter;
    printf("Welcome to my perimeter calculator\nPlease enter the lenght of the rectangle\n");
    scanf("%f",&lenght);
    printf("Please enter the width of the rectangle\n");
    scanf("%f",&width);
    perimeter=2*lenght+2*width;
    printf("The perimeter of the rectangle is\n%.1f\nThank you for using my perimeter calculator",perimeter);
    return 0;
}
//This program helps in calculating the area of a rectangle using functions
#include<stdio.h>
#include<stdlib.h>
float area(float lenght,float width)
{
    float area;
    area=lenght*width;
    return area;
}
int main() 
{
    float l,b;
    printf("Enter the lenght and the width respectively :");
    scanf("%f %f",&l,&b);
    printf("The total area of the rectangle is %.2f (Rounded off to two decimal places)",area(l,b));
    return 0;
}
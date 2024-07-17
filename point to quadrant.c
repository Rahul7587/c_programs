#include<stdio.h>
#include<stdlib.h>
int main() {
    float x,y;
    printf("Welcome!\nPlease enter the abscissa of the point\n");
    scanf("%f",&x);
    printf("Please enter the ordinate of the point\n");
    scanf("%f",&y);
    if (x>0 && y>0)
    {
        printf("The point lies in the first quadrant\n");
    }
    else if (x==0 && y!=0)
    {
        printf("The point lies on the y-axis\n"); 
    }
    else if (x<0 && y>0)
    {
        printf("The point lies in the second quadrant\n");
    }
    else if (x!=0 && y==0)
    {
        printf("The point lies on the x-axis\n");
    }
    else if (x<0 && y<0)
    {
        printf("The point lies in the thrid quadrant\n");
    }
    else if (x>0 && y<0)
    {
        printf("The point lies in the fourth quadrant\n");
    }
    else
    {
        printf("The point is the origin\n");
    }
    printf("Thank you!");
    return 0;
}
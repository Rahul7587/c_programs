/*cityA to city B,time calculator*/
#include<stdio.h>
int main() {
    float d,s,t;
    /*d-distance travelled by the vehicle,s-speed of the vehicle,t-time taken*/
    printf("Welcome\nPlease enter the distance between the cities\n");
    scanf("%f",&d);
    printf("Please enter the speed at which the vehicle travels\n");
    scanf("%f",&s);
    t=d/s;
    printf("The time taken by the vehicle to travel is %f\nThank you",t);
    return 0;
}
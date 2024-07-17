/*The following programs helps in calculating the distance between two-
points in a coordinate system*/
/*x1,x2,y1,y2 represent the x and y coordinates of two points
dis-distance between the points*/

 #include<stdio.h>
 #include<math.h>
int main() {
    float x1,x2,y1,y2,dis;
    printf("Welcome\nPlease enter the abscissa of the first point\n");
    scanf("%f",&x1);
    printf("Please enter the ordinate of the first point\n");
    scanf("%f",&y1);
    printf("Please enter the abscissa of the second point\n");
    scanf("%f",&x2);
    printf("Please enter the ordinate of the second point\n");
    scanf("%f",&y2);
    dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("The distance between the two points is %f\nThank you",dis);
    return 0;
}
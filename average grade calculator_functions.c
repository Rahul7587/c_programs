//This program helps in calculating the average of three grades using functions
#include<stdio.h>
#include<stdlib.h>
float grade(float grade1,float grade2,float grade3)
{
    float avg_grade;
    avg_grade=(grade1+grade2+grade3)/3;
    return avg_grade;
}
int main()
{
    float g1,g2,g3;
    printf("Enter your grades :");
    scanf("%f %f %f",&g1,&g2,&g3);
    printf("The average grade is %f",grade(g1,g2,g3));
    return 0;
}
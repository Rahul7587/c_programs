#include<stdio.h>
#include<stdlib.h> 
int main() {
    float grade,average,totalgrade=0,no_of_grades=0;
    printf("Please enter your grade(ENTER -1, IF YOUR DONE ENTERING YOUR GRADES):");
    scanf("%f",&grade);
    while (grade!=-1)
    {
        totalgrade=totalgrade+grade;
        no_of_grades++;
        printf("Please enter your grade(ENTER -1, IF YOUR DONE ENTERING YOUR GRADES):");
        scanf("%f",&grade);
    }
    if (no_of_grades>0)
    {
    average=(totalgrade)/(no_of_grades);
    printf("The overall average grade is %f",average);
    }
    else
    {
        printf("no grades are entered");
    }
    return 0;
}
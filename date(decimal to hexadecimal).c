#include<stdio.h>
#include<stdlib.h>
int main() {
        int year,month,day;
        printf("Welcome!Please enter the year\n");
        scanf("%d",&year);
        printf("Please enter the month\n");
        scanf("%d",&month);
        printf("Please enter the day\n");
        scanf("%d",&day);
        printf("The day can be represented as %X/%X/%X",day,month,year);
        return 0;
}
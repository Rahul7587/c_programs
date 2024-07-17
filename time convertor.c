#include<stdio.h>
int main() {
    /*program that recieves time in seconds-
    and converts them into hours remaining-
    time in minutes and still remaining time in seconds */
    int sec,hour,min,sec1;
    printf("Welcome\nPlease enter the time in seconds\n");
    scanf("%d",&sec);
    hour=sec/3600,min=(sec-hour*3600)/60,sec1=(sec-hour*3600)%60;
    //remainder is given by % symbol
    printf("The given time when represented in  will be %dhours %dminutes %dseconds",hour,min,sec1);
    return 0;
}
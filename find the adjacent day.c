#include<stdio.h>
#include<stdlib.h>
int main() {
    int day,month,year;
    printf("ENTER THE DAY:");
    scanf("%d",&day);
    printf("ENTER THE MONTH:");
    scanf("%d",&month);
    printf("ENTER THE YEAR:");
    scanf("%d",&year);
    if ((month==1 || month==3 || month==5 || month==7 || month==8 || month==10) && (day==31))
    {
        day=1,month=month+1;
    }
    else if ((month==4 || month==6 || month==9 || month==11) && (day=30))
    {
        day=1,month=month+1;
    }
    else if ((month==12) && (day==31))
    {
        day=1,month=1,year=year+1;
    }
    else if ((month==2) && (day=28))
    {
        day=1,month=month+1;
    }
    else if ((month==2) && (year%4==0 && year%100!=0 || year%400==0) && day==29)
    {
        day=1,month=3,year=year=1;
    }
    else
    {
        day=day+1;
    }
    printf("The next awesome day is %d/%d/%d\nThank you!",day,month,year);    
    return 0;
}
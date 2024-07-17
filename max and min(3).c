#include<stdio.h>
#include<stdlib.h>
int main() {
    /*This program helps in finding max and min among three numbers */
    int a,b,c;
    printf("Welcome!\nPlease enter all the three number\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (b>c)
        printf("Max=%d\nMin=%d",a,c);
        else
        printf("Max=%d\nMin+%d",a,b);
        
    }
    if (b>c)
    {
        if(c>a)
        printf("Max=%d\nMin=%d",b,a);
        else
        printf("Max=%d\nMin=%d",b,c);
    }
    if (c>a)
    {
        if (a>b)
        printf("Max=%d\nMin=%d",c,b);
        else
        printf("Max=%d\nMin=%d",c,a);
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main() {
    /*in-input
    this program is used find whether given number is even or odd*/
    int in;
    printf("WELCOME!\nPLEASE ENTER YOUR NUMBER\n");
    scanf("%d",&in);
    if (in%2==0)
    printf("THE GIVEN NUMBER IS EVEN");
    else
    printf("THE GIVEN NUMBER IS ODD");
}
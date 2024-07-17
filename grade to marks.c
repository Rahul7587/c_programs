#include<stdio.h>
#include<stdlib.h>
int main() {
    char grade;
    printf("Welcome!\nPlease enter your grade\n");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
        printf("Your marks lie between 90-100\n");
        break;
    case 'B':
        printf("Your marks lie between 80-90\n");    
        break;
    case 'C':
        printf("Your marks lie between 70-80\n");
        break;
    case 'D':
        printf("Your markes lie between 60-80\n");
        break;    
    case 'E':
        printf("Your marks are below 60\n");
        break;
    }
    return 0;
}
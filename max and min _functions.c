/*This program prints the max and min between two numbers*/
#include<stdio.h>
#include<stdlib.h>
void print_minmax(int num1,int num2) {                               //use of a function 
    if (num1>num2)                                                   //num1 and num2 inside the parenthesis are the parameters
    {                                                                //print_minmax is the name
        printf("The maximum is %d\nThe minimum is %d\n",num1,num2);  //Then the rest are the commands/function body
    }
    else
    {
        printf("The maximum is %d\nThe minimum is %d\n",num2,num1);
    }
}
int main() {
        int a,b;
        printf("Enter a number :");
        scanf("%d",&a);
        printf("Enter a number :");
        scanf("%d",&b);
        print_minmax(a,b);                                            //Here a and b take over the parameters in above function
    return 0;    
}
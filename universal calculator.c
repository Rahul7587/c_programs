#include<stdio.h>
#include<stdlib.h>
/*This is an universal calculator, this allows to perform various functions in go*/
int main() {
    char operation;
    float num1,num2,sum,diff,prod,divi,per;
    printf("Welcome!\nPlease enter the operation to wanted to perform\n");
    scanf("%c",&operation);
    printf("Please enter the first number\n");
    scanf("%f",&num1);
    printf("Please enter the second number\n");
    scanf("%f",&num2);
    switch (operation)
    {
    case '+':
        printf("The sum of the given numbers is %f\n",sum=num1+num2);
        break;
    case '-':
        printf("The difference of the given numbers is %f\n",diff=num1-num2);
        break;    
    case '*':
        printf("The product of the given numbers is %f\n",prod=num1*num2);    
        break;
    case '/':
        printf("The division of the numbers is %f\n",divi=num1/num2);
        break;
    case '%':
        printf("The percentage of the frist number over the second number is %f\n",per=(num1/num2)*100);
        break;    
    default:
         printf("ERROR!...Please check your inputs\n");
        break;
    }
    printf("Thank you!");
return 0;
}
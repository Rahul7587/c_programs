#include<stdio.h>
int main() {
    /*When you swap variable values, consider an other dummy variable-
    here temp and form a continuous loop among the variables in the-
    declaration part the program*/
    float a=10,b=20,temp;
    printf("a=%f\nb=%f\n",a,b);
    temp=a,a=b,b=temp;
    printf("a=%f\nb=%f",a,b);
    return 0;
    }
#include <stdio.h>

int main() {
   char operator;
   printf("Please choose the operator you would like to use ['+','-','*','/']: ");
    scanf("%c", &operator);
    
    double num1, num2;
    
    printf("Please enter the first numnber: ");
     scanf("%lf", &num1);
     
     printf("Please enter the second number: ");
     scanf("%lf", &num2);
     
     double result;
     
     switch (operator){
         
         case '+':
        result = num1 + num2;
        printf("%.2lf", result);
         break;
         
         case '-':
        result = num1 - num2;
        printf("%.2lf", result);
         break;
         
         case '*':
        result = num1 * num2;
        printf("%.2lf", result);
         break;
         
         case '/':
        result = num1 / num2;
        printf("%.2lf", result);
         break;
         
         
     }
    return 0;
}

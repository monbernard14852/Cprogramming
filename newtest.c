#include<stdio.h>
 
void main()
{
    char operator;
    int num1, num2,total[4];
    total[0] = num1+num2;
    total[1] = num1-num2;
    total[2] = num1*num2;
    total[3] = num1/num2;

    printf("Enter number: ");
    scanf(" %d", &num1 );
    printf("Enter number: ");
    scanf(" %d", &num2 );
    printf("Enter operator: ");
    scanf(" %c", &operator );  
    printf("Total %d",total);   
switch(operator){
    case '+':
        total[0];
    break;
    case '-':
        total[1];
    break;
    case '*':
        total[2];
    break;
    case '/':
        total[3];
    break;
    default:
        printf("Error !!");
        }
}

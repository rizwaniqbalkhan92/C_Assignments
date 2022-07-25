#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(){

char op;
float numFirst,numSecond,result;

printf("Choose the Operator from below list \n '+','-','*','/'\n");
scanf("%s",&op);
printf("Enter First Number\n");
scanf("%f",&numFirst);
printf("Enter Second Number\n");
scanf("%f",&numSecond);
switch (op)
{
case '+':
result = numFirst + numSecond;
printf("Addition of %f and %f = %f",numFirst,numSecond,result);
    break;
case '-':
result = numFirst - numSecond;
printf("Substraction of %f and %f = %f",numFirst,numSecond,result);
    break;
case '*':
result = numFirst * numSecond;
printf("Multiplication of %f and %f = %f",numFirst,numSecond,result);
    break;
case '/':
result = numFirst / numSecond;
printf("Division of %f and %f = %f",numFirst,numSecond,result);
    break;

default:
    printf("Please choose correct Operator from list \n '+','-','*','/'");
    break;
}






}
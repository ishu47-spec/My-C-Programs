#include<stdio.h>
#include<conio.h>

int main() {
float num1,num2;

printf("Enter the value of num1 and num2: ");
scanf("%f%f", &num1,&num2);

float sum = num1+ num2;
float difference = num1 - num2;
float product = num1*num2;
float division = num1/num2;



printf("The sum = %.2f\ndifference = %.2f\nproduct = %.2f\ndivision = %.2f", sum, difference, product, division);
return 0;
}

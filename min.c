/*This program prints the minimum of 2 numbers using function.*/
#include<stdio.h>

int minimum(int x, int y) {          //int x and int y are arguments in place of int a and int b from main function..
return (x<y)? x:y;
}

int main() {
int a=12, b=9;

int min = minimum(a,b);
printf("%d", min);
return 0;
}

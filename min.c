/*This program prints the minimum of 2 numbers using function.*/
#include<stdio.h>

int minimum(int x, int y) {
int min = (x<y)? x:y;
return min;
}

int main() {
int a=12, b=9;

int min = minimum(a,b);
printf("%d", min);
return 0;
}

/*This program takes input and displays string without use of loop.*/
#include<stdio.h>
#include<string.h>            

int main() {
char str[40];
puts("Enter your string: ");      //puts adds \n by default at the end of the our string.
gets(str);
puts(str);
return 0;
}

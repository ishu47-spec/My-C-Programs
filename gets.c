/*This program takes input as string from user and displays it.*/
#include<stdio.h>
#include<string.h>

int main() {
char str[100];
printf("Enter your info: ");
gets(str);
printf("Your info is: %s", str);         // puts(str) will print the string only which the user inputs.
return 0;
}

/*This program represents string initialization.*/
#include<stdio.h>

int main() {
char str[] = "Hello I'm a coder!";
int i=0;
while(str[i]!='\0'){             //Here, /0 is a default value and is always present at the end of the string.
    printf("%c", str[i]);
    i++;
}
return 0;
}

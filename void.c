/*This program uses a void-type function which returns no value.*/
#include<stdio.h>

void Nepal() {
printf("I love Nepal.\n");
return;
}

void China() {
printf("I love China.\n");
Nepal();
return;     //returns no value..
}

void India() {
printf("I love India.\n");
China();
return;
}

int main() {
India();
return 0;         //int main function returns value '0'.
}

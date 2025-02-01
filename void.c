#include<stdio.h>

void Nepal() {
printf("I love Nepal.\n");
return;
}

void China() {
printf("I love China.\n");
Nepal();
return;
}

void India() {
printf("I love India.\n");
China();
return;
}

int main() {
India();
return 0;
}

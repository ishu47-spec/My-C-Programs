#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
char str[40];

printf("Enter your string: ");
gets(str);
int i,j,k;
int size = 0;
k=0;
while (str[k]!='\0') {
    size++;
    k++;
}
for (i=0, j=size-1; i<=j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}
puts(str);
return 0;
}

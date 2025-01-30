#include<stdio.h>

int main() {

int arr[8] = {1,56,24,101,24,35,56,24};
int i,n;

printf("Enter a number: ");
scanf("%d", &n);
int count = 0;
for (i=0; i<8; i++) {
    if (arr[i] == n) {
        count++;
    }
}
printf("Number %d is found %d times in array.\n", n,count);
return 0;
}

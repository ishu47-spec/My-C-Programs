#include<stdio.h>
#include<conio.h>

int main() {

int arr[5];
int avg, sum=0;

int i;
for (i=0; i<5; i++) {
    printf("Enter marks: ");
    scanf("%d", &arr[i]);
}

for (i=0; i<5; i++) {
    sum = sum + arr[i];
}
avg = sum/5;
printf("\nThe average marks is: %d", avg);
return 0;
}

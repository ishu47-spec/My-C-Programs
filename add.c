/*This program finds the sum of a 2*2 matrix.*/
#include<stdio.h>

int main() {
int arr[2][2];
int i,j;

for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
        scanf("%d\t", &arr[i][j]);
    }
}
int sum = 0;
for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
    sum += arr[i][j];
}
}
printf("The sum is: %d", sum);
return 0;
}

/*This program takes input from user and adds elements of two 2D-arrays(matrices).*/
#include<stdio.h>

int main() {
int arr[2][2];
int brr[2][2];
int result[2][2];
int i,j;

for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
        scanf("%d", &arr[i][j]);
    }
}
for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
        scanf("%d", &brr[i][j]);
    }
}
printf("\n");
for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
    result[i][j] = arr[i][j] + brr[i][j];
    }
}
for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
 printf("%d\t", result[i][j]);
    }
printf("\n");
}
return 0;
}

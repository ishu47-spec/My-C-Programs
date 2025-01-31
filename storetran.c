/*This program stores transpose of a given matrix into another.*/
#include<stdio.h>

int main() {
    int r,c;
    printf("Enter the no. of rows: ");
    scanf("%d", &r);
    printf("Enter the no. of columns: ");
    scanf("%d", &c);


    int arr[r][c];
    int brr[c][r];
    int i,j;

for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
    scanf("%d", &arr[i][j]);
    }
}

for (i=0; i<c; i++) {
    for (j=0; j<r; j++) {
        brr[i][j] = arr[j][i];
    }
}
for (i=0; i<c; i++) {
    for (j=0; j<r; j++) {
        printf("%d\t", brr[i][j]);
    }
    printf("\n");
}
return 0;
}

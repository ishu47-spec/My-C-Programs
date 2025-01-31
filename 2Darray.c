/*This program takes input from user and displays elements in 2D-array.*/
#include<stdio.h>

int main() {
    int i,j,r,c;
printf("Enter the no. of rows: ");
scanf("%d", &r);
printf("\nEnter the no. of columns: ");
scanf("%d", &c);
int arr[r][c];

for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
    scanf("%d", &arr[i][j]);
    }
}
printf("\n");
for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
    printf("%d\t", arr[i][j]);
    }
printf("\n");
}
return 0;
}

#include<stdio.h>

int main() {
int arr[4][2] = {{2,5},{44,23},{23,3},{3,111}};
int i,j;

for (i=0; i<4; i++) {
    for (j=0; j<2; j++) {
        printf("%d\t", arr[i][j]);
    }
    printf("\n");
}
return 0;
}

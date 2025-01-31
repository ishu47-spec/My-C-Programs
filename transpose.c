/*This program prints the transpose of a given matrix.*/
#include<stdio.h>

int main() {
    int arr[2][3]= {2,44,53,5,78,89};
    int i,j;

for (i=0; i<3; i++) {
    for (j=0; j<2; j++) {
        printf("%d\t", arr[j][i]);
    }
    printf("\n");
}
return 0;
}

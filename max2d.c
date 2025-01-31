#include<stdio.h>
int main() {
int arr[3][3] = {1,22,32,54,65,222,4,6,8};
int i,j;
int max = arr[0][0];
int maxrow;
for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
        if (arr[i][j]>max) {
            max = arr[i][j];
            maxrow = i;
        }
    }
}
printf("Max element is %d and its row is %d", max, maxrow+1);
   return 0;
}

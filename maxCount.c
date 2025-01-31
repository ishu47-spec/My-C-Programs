/*This program counts maximum no. of 1's in a row.*/
#include<stdio.h>

int main() {
int arr[3][3] = {{1,1,1}, {0,1,1}, {1,0,0}};
int i,j;
int maxcount=0;

for (i=0; i<3; i++) {
        int count = 0;
    for (j=0; j<3; j++) {
        if (arr[i][j] == 1) {
            count++;
        }
        if (maxcount < count) {
            maxcount = count;
        }
    }
}
printf("%d", maxcount);
return 0;
}

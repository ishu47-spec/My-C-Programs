#include<stdio.h>

int main() {
int arr[6] = {2,24,67,43,199,12};
int brr[6];
int i;

for (i=0; i<6; i++) {
    brr[i] = arr[6-1-i];
    printf("%d\n", brr[i]);
}

return 0;
}

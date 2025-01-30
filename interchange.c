#include<stdio.h>

int main() {
int i,temp;

int arr[5] = {2,42,77,3,101};

for (i=0; i<5; i=i+2) {
    temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
}
for (i=0; i<5; i++) {
    printf("%d\n", arr[i]);
}
return 0;
}

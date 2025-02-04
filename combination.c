/*This program calculates the operation of combination using loops.*/
#include<stdio.h>

int main() {
    int n,r;

printf("Enter the value of n and r: ");
scanf("%d%d", &n, &r);

int nfact=1;  //factorial of n
int rfact=1;   //factorial of r
int nrfact=1;   //factorial of (n-r)

int i;
for (i=1; i<=n; i++) {
    nfact = nfact*i;
}
for (i=1; i<=r; i++) {
    rfact = rfact*i;
}
for (i=1; i<=n-r; i++) {
    nrfact = nrfact*i;
}

int ncr = nfact/(rfact*nrfact);
printf("The value of combination is: %d", ncr);
return 0;

}

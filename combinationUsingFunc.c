/*This program finds the combinational value using function.*/
#include<stdio.h>

int factorial(x) {
int fact=1, i;
for (i=1; i<=x; i++) {
fact = fact * i;
}
return fact;
}


int main() {
int n,r;
printf("Enter the value of n and r: ");
scanf("%d%d", &n, &r);

int nfact=factorial(n);
int rfact=factorial(r);
int nrfact=factorial(n-r);

int ncr = nfact/(rfact*nrfact);
printf("%d", ncr);
return 0;


}

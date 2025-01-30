#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
int choice,i,n,fact;

while (1) {

    printf("1. Factorial of a number.");
    printf("\n2. Prime or not.");
    printf("\n3. Odd or even.");
    printf("\n4. Exit");
    printf("\nYour Choice?");
    scanf("%d", &choice);

    switch (choice) {
case 1:
    printf("\nEnter a number: ");
    scanf("%d", &n);
        fact = 1;
    for (i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("\nThe factorial of %d is %d.", n,fact);
    break;


case 2:
    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i=2; i<n; i++) {
        if (n%i==0) {
            printf("\nNot a prime.");
            break;
        }
    }
    if (n==i)
        printf("\nPrime number.");
    break;

case 3:
    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n%2==0) {
        printf("\nEven number.");
    }
    else
        printf("\nOdd number.");
    break;

case 4:
    exit (0);

default:
    printf("\nWrong Choice\a\n");
    }
}
return 0;
}

/*This program identifies whether a given year is leap year or not.*/
#include<stdio.h>
#include<conio.h>

int main() {
int year;
printf("Enter a year: ");
scanf("%d",&year);

if(year % 400 == 0 || year%4==0 && year%100 != 0) {
    printf("\nGiven year is leap year.");
}
else
    printf("\nNo, its not a leap year.");
return 0;
}

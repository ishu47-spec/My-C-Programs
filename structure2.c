/*This program takes input and displays the info of 5 books using array in structure.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct book {
int bookID;
char title[150];
float price;
};

int main() {
struct book b[5];
int i;

for (i=0; i<5; i++) {
printf("\nEnter book ID: ");
scanf("%d", &b[i].bookID);

printf("\nEnter book title: ");
fflush(stdin);
gets(b[i].title);

printf("\nEnter book price: ");
scanf("%f", &b[i].price);
}

for (i=0; i<5; i++) {
printf("\nBookID = %d\tBook Title = %s\t Book price = Rs.%.2f", b[i].bookID, b[i].title, b[i].price);
}
return 0;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct book {
int bookID;
char title[150];
float price;
};

int main() {
struct book b1;

printf("Enter book ID: ");
scanf("%d", &b1.bookID);

printf("\nEnter book title: ");
fflush(stdin);
gets(b1.title);

printf("\nEnter book price: ");
scanf("%f", &b1.price);

printf("\nBookID = %d\tBook Title = %s\t Book price = Rs.%.2f", b1.bookID, b1.title, b1.price);
return 0;
}

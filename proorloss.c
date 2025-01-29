#include<stdio.h>
#include<conio.h>

int main() {
float sp, cp, pro, loss;

printf("Enter sp and cp: ");
scanf("%f%f", &sp, &cp);

if (sp>cp) {
    pro = sp - cp;
    printf("\nThere is profit of Rs.%.2f.", pro);
}
else {
    loss = cp - sp;
    printf("\nThere is loss of Rs.%.2f.", loss);
}
return 0;
}

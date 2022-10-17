#include<stdio.h>
#include<conio.h>
int main (){

float usd, inr;
// usd = united state dollar
// inr = indian rupees

printf("enter a amount in inr\n");

scanf("%f", &inr);

usd = (1/76.23*inr);

printf("the value of usd is %f", usd );

getch();

return 0;
}
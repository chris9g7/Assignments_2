#include<stdio.h>
int main(){

int x, sum = 0, rem = 0;

printf("enter a number\n");
scanf("%d" ,&x);
rem = x%10;
x = x/10;
sum = sum + rem;

rem = x%10;
x = x/10;
sum = sum + rem;

rem = x%10;
x = x/10;
sum = sum + rem;

printf("value of sum is %d" , sum);

}
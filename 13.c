#include<stdio.h>
int main(){
int x,y;

printf("enter a three digit number\n");
scanf("%d", &x);

y = x/10;
x = x%10;
x = x*100;
x = x + y;


printf("the value rotating value of x is %d",x);
    return 0;
}
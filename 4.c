#include<stdio.h>
int main(){

int a,b;
printf("enter the value a and b \n");
scanf("%d %d", &a, &b);
a = a+b;
b = a-b;
a = a-b;

printf("swap values of a and b are \n %d      %d", a,b);


return 0;
}

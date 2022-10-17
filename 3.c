#include<stdio.h>
int main(){

int a , b  ,c; 
// using third variable c for storing the value of a or b

printf("enter the value a and b\n");
scanf("%d \n %d", &a, &b);
c = a;
a = b;
b = c;
printf("swap values of \n a is %d    b is %d", a,b);


return 0;
}
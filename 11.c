#include<stdio.h>
int main(){

int num , dig , RN;
// resulting number both joining number and digit

printf("enter a number and a digit\n");

scanf("%d %d", &num , &dig);

num = num*10;

RN = num + dig;
 
printf("the value of resulting numebr is %d", RN);

return 0;

}
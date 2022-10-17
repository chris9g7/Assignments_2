#include<stdio.h>
int main(){

int x;
printf("enter a number\n");
scanf("%d", &x);

if((x&1) == 0)  // *** 
{
printf("even number");
}

else

{
printf("odd number");
}

}



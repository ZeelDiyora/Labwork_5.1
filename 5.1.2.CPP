//write a program to find if a given number is neutral or not using a ladder if else.

#include<stdio.h>
#include<conio.h>

void main(){
int z;
clrscr();
printf("enetr the value of first number: ");
scanf("%d",&z);

if (z<0){
   printf("the numner is negative: ");
}else if (z == 0){
   printf("the number is neutral: ");
}else{
printf("the number is positive: ");
}
getch();
}
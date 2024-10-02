//A program to calculate compound interest

#include<stdio.h>

int main(){

//we give variable for each value
int principal;
int time;
int rate;

//we aske the user to enter

 
 printf("Enter your principal: ");
 scanf("%d", &principal);//the user will enter the principal

 printf("Enter time(years): ");
 scanf("%d",&time);//the user will entetr time in years
 
 printf("Enter rate of the bank: ");
 scanf("%d",&rate);//the user will enter bank rate in %form
 
 //we now write variable

 
 int amount;

 amount = principal *((1 + rate/100)^time); //this is the formulae to calculet CI
 printf("amount is %d",amount);//this will print out the compound interest



return 0;
}
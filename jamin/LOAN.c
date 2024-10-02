//program to check loan of a customer

#include <stdio.h>
int main() {

    // we declare veriabale for user input
    int age;
    int salary;

    //we prompt the user to enter values for salary and age

    printf("Enter your  age:");
    scanf("%d", &age);

    printf("Enter your  salary:");
    scanf("%d",&salary);

    //WE use condition

    if (age >= 21,salary >= 21000) {
        printf("congratulations you qualify for the loan\n");
    }
    else {
        printf("Unfortunately we are unable to offer you a loan at this time!\n");
    }

    return 0;
}

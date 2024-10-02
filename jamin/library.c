// a program to check on books dued by student
#include <stdio.h>
int main() {

    // declaring variables for book id,due date,return date

    int Book_ID;
    int Due_date;
    int Return_date;

    // pronmpting the librerian to enter value for book id,due date,return date

    printf("Enter book id: ");
    scanf("%d" ,&Book_ID);

    printf("Enter Due_date:  ");
    scanf("%d" ,&Due_date);

    printf("Enter return date: ");
    scanf("%d" ,&Return_date);

    //insructing the computer to calculet days overdue

    int days_overdue;
    days_overdue=Return_date - Due_date;
    printf("This is your days overdue: %d\n ",days_overdue);

    //condition to calculet the charges for books with overdue

    if (days_overdue == 7)
        printf("ksh.20 is your charges for:%d days",days_overdue);

    else if(days_overdue >= 8 && days_overdue <= 14 )
        printf("Ksh.50 is your charges for:%d days",days_overdue );

    else if(days_overdue >= 15  )
        printf("Ksh.100 is your charges for:%d days",days_overdue);

    return 0;
}

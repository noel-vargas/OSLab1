#include "stdio.h"
#include "../include/functions.h"

int main() {
    char* months[] = {"January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"};
    int day;
    int month;
    int year;
    // 3 inputs to ask the user
    int date1;
    int date2;
    int date3;
    printf("Enter the first number");
    scanf("%d", &date1);
    FillDate(date1, &day, &month, &year);
    char currMonth = months[month];
    printf("%s %d, %d",currMonth, day,year);
    // printf("Enter the second number:");
    // scanf("%d", &date2);
    // printf("Enter the third  number");
    // scanf("%d", &date3);

    
    return 0;
}
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
    // int firstNumber;
    // int secondNumber;
    // int thirdNumber;
    // printf("Enter the first number");
    // scanf("%d", &firstNumber);
    // printf("Enter the second number:");
    // scanf("%d", &secondNumber);
    // printf("Enter the third  number");
    // scanf("%d", &thirdNumber);

    // long result = firstNumber*10000+secondNumber*100+thirdNumber;
    long seconds;
    printf("Enter the seconds");
    scanf("%ld", &seconds);
    // FillDate(result, &day, &month, &year);
    FillDate(seconds, &day, &month, &year);
    char* currMonth = months[month];
    printf("%s %d,%d",currMonth, day,year);
    
    return 0;
}
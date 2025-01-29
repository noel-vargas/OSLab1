#include "stdio.h"
#include "../include/functions.h"

int main() {
    char* months[] = {"January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"};

    long seconds;
    printf("Enter the seconds");
    scanf("%ld", &seconds);
   
    struct date currentDate = FillDateWithStruct(seconds);
    printf("%s %d,%d",currentDate.month, currentDate.day,currentDate.year);
    
    return 0;
}
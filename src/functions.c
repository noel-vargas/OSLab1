#include "functions.h"
#include <stdio.h>
#include "math.h"

int CosineSeries(int init_number, int end_number) {
    // define the variables
    double totalSum = 0;
    for (int i = init_number; i <= end_number; i++) {
        // call the function
        totalSum += cos(i);
    }

    // return 1 if sum is positive or zero
    if (totalSum >=0){
        return 1;
    }
    return 0;
}

void FillDate(long second, int* day, int* month, int* year){
  // secondsPerDay = 86400
  double totalDays = second / 86400;
  int totalYears = 0;
  int leapYear = 0;
  while (totalDays >= 365){
    // check if leap year
    if (totalYears %4 == 0){
      // leap year
      totalDays -= 366;
      leapYear = 1;
    }else {
      totalDays -= 365;
      leapYear = 0;
    }
    totalYears +=1;

  }
  totalDays += leapYear;
  int daysOfTheMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int size = sizeof(daysOfTheMonth);
  int* ptr = daysOfTheMonth;
  int currMonth = 0;
  for ( int i = 0; i < size; i++ ){
    int currentElement = *(ptr+i);

      if( totalDays <= currentElement){
          break;
      }
        totalDays -= currentElement;
        currMonth +=1;
  }

  *day = totalDays;
  *month = currMonth;
  *year = totalYears;

  
}
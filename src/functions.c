#include "../include/functions.h"
#include <stdio.h>
#include "math.h"
#include <stdlib.h>
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
  double totalDays = (second / 86400)+1; // +1 since we start at January 1st
  int startYear = 1970;
  while (totalDays >= 365){
    // check if leap year
    if (startYear %4 == 0){
      // leap year
      totalDays -= 366;
    }else {
      totalDays -= 365;
    }
    startYear +=1;

  }
  int daysOfTheMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
  if (startYear %4 == 0){
    // adjust february and add an extra day to total days I think. 
     daysOfTheMonth[1] +=1;
  }

  int size = sizeof(daysOfTheMonth)/4;
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
  *year = startYear;

  
}


struct date FillDateWithStruct(long second){
  struct date currentDate;
  
  char* months[] = {"January", "February", "March", "April",
  "May", "June", "July", "August",
  "September", "October", "November", "December"};
  // secondsPerDay = 86400
  double totalDays = (second / 86400)+1; // +1 since we start at January 1st
  int startYear = 1970;
  while (totalDays >= 365){
    // check if leap year
    if (startYear %4 == 0){
      // leap year
      totalDays -= 366;
    }else {
      totalDays -= 365;
    }
    startYear +=1;

  }
  int daysOfTheMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
  if (startYear %4 == 0){
    // adjust february and add an extra day to total days I think. 
     daysOfTheMonth[1] +=1;
  }

  int size = sizeof(daysOfTheMonth)/4;
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
   currentDate.day = totalDays;
   currentDate.month = months[currMonth];
   currentDate.year = startYear;

   return currentDate;

}


void UpperRand(char* base, char* mod){
  printf("Provide the input:");
  scanf("%s", base);

  srand(time(NULL));

  // check if a numberis even or odd and use that randomness 
}
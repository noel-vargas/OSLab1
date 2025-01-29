#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/**
 * @brief Prints "Hello, World!" to the console.
 *
 * This function demonstrates a simple message output
 * to the console using the standard printf function.
 */
  struct date {
    int day;
    char* month;
    int year;
};
  // int CosineSeries(int init_number, int end_number);
  //void FillDate(long second, int* day, int* month, int* year);
  struct date FillDateWithStruct(long second);
#endif // FUNCTIONS_H

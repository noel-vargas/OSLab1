#include "stdio.h"
#include "../include/functions.h"

int main() {
    // call the function
    int lowerLimit;
    int upperLimit;
    int result;
    do {
    printf("Enter the initial number:");
    scanf("%d", &lowerLimit);
    printf("Enter the end number:");
    scanf("%d", &upperLimit);


    }
    
    while (lowerLimit > upperLimit);

    result = CosineSeries(lowerLimit, upperLimit);

    if (result == 1){
        printf("The sum of the cosine series is positive or zero\n, %d", result);
    }
    else{
        printf("The sum of the cosine series is negative\n, %d", result);
    }
    return 0;

}

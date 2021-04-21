/**
 * @file MovingAverageTest.c
 * @author Talha Sarı (talha.sari@outlook.com.tr)
 * @brief N-Point Moving Average Filter Test Script
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include "MovingAverageFilter.h"


/* Filter Handler */
MovingAverageFilter filter;

/* Test Data */
float testSignal[20] = {1.0f, 5.0f, 12.5f, 13.2f, 14.5f, 13.9f, 14.1f, 24.0f, 32.2f, 31.0f,
                        30.2f, 24.3f, 23.4f, 19.0f, 18.2f, 6.9f, 3.2f, -2.5f, -15.0f, -21.5f};

/* Filtered Output Data */
float testOutput[20];

int main()
{
    /* Initializing Filter for the 5-Point Moving Average */
    MovingAverageFilter_Init(&filter, 5);

    /* Calculation */
    for (int i = 0; i < 20; i++) {
        testOutput[i] = MovingAverageFilter_Update(&filter, testSignal[i]);
        printf("Input: %f\t Output: %f\n", testSignal[i], testOutput[i]);
    }

    return 0;
}
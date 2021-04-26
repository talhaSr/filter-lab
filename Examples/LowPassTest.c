/**
 * @file LowPassTest.c
 * @author Talha Sarı (talha.sari@outlook.com.tr)
 * @brief Low Pass Filter Test Script
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include "../LowPass/LowPassFilter.h"

/* Filter Handler */
LowPassFilter filter;

/* Test Data */
float testSignal[20] = {1.0f, 5.0f, 12.5f, 13.2f, 14.5f, 13.9f, 14.1f, 24.0f, 32.2f, 31.0f,
                        30.2f, 24.3f, 23.4f, 19.0f, 18.2f, 6.9f, 3.2f, -2.5f, -15.0f, -21.5f};

/* Filtered Output Data */
float testOutput[20];

int main(int argc, char *argv[])
{
    printf("This is a test condition\n");

    /* Initializing Filter w/ Cutoff Frequency 50 Hz and Sampling Frequency 110 Hz */
    LowPassFilter_Init(&filter, 50, 110);

    /* Calculation */
    for (int i = 0; i < 20; i++) {
        testOutput[i] = LowPassFilter_Update(&filter, testSignal[i]);
        printf("Input: %.3f\t Output: %.3f\n", testSignal[i], testOutput[i]);
    }

    return 0;
}
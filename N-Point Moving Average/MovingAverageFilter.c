/**
 * @file MovingAverageFilter.c
 * @author Talha Sarı (talha.sari@outlook.com.tr)
 * @brief An N-Point Moving Average Filter implementation in C
 * @version v1.0
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "MovingAverageFilter.h"
#include <stdlib.h>

void MovingAverageFilter_Init(MovingAverageFilter *filter, uint8_t nPoint)
{
    /* Set N-Point Size */
    filter->bufferSize = nPoint;

    /* Clearing Filter Buffers */
    if (filter->buffer != 0) {
        filter->buffer = (float*)realloc(filter->buffer, filter->bufferSize * sizeof(float));
    } else {
        filter->buffer = (float*)calloc(filter->bufferSize, sizeof(float));
    }

    if (filter->impulseResponse != 0) {
        filter->impulseResponse = (float*)realloc(filter->impulseResponse, filter->bufferSize * sizeof(float));
    } else {
        filter->impulseResponse = (float*)calloc(filter->bufferSize, sizeof(float));
    }

    /* Init Filter Buffer */
    for (uint8_t i = 0; i < filter->bufferSize; i++) {
        *((filter->buffer) + i) = 0.0f;
    }

    /* Init Filter Impulse Response */
    for (uint8_t i = 0; i < filter->bufferSize; i++) {
        *((filter->impulseResponse) + i) = (float)(1.0f / filter->bufferSize);
    }

    /* Clear Filter Output */
    filter->output = 0.0f;
}

float MovingAverageFilter_Update(MovingAverageFilter *filter, float input)
{
    /* Data Shift */
    for (uint8_t i = (filter->bufferSize - 1); i >= 0; i--) {
        *((filter->buffer) + (i + 1)) = *((filter->buffer) + i);
    }
    *(filter->buffer) = input;

    /* Filter Output Calculation */
    float temp = 0.0f;
    for (uint8_t i = 0; i < filter->bufferSize; i++) {
        filter->output = filter->output + (*(filter->buffer + i) / filter->bufferSize);
    }

    return filter->output;
}
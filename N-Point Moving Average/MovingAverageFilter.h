/**
 * @file MovingAverageFilter.h
 * @author Talha Sarı (talha.sari@outlook.com.tr)
 * @brief An N-Point Moving Average Filter implementation in C
 * @version v1.0
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef MOVING_AVERAGE_FILTER_H
    #define MOVING_AVERAGE_FILTER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/* Filter HandleTypedef */
typedef struct MovingAverageFilter
{
    float *buffer;
    float *impulseResponse;
    uint8_t bufferSize;

    float output;
} MovingAverageFilter;

/* Fucntions */
void MovingAverageFilter_Init(MovingAverageFilter *filter, uint8_t nPoint);
float MovingAverageFilter_Update(MovingAverageFilter *filter, float input);

#ifdef __cplusplus
}
#endif

#endif
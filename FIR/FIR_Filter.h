/**
 * @file FIR_Filter.h
 * @author Talha Sarı (talha.sari@outlook.com.tr)
 * @brief FIR Filter Implementation in C
 * @version v1.0
 * @date 2021-06-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef FIR_FILTER_H
#define FIR_FILTER_H

#include <stdint.h>

typedef struct FIR_Filter {
    float out;
    float *coefficient;
    float *buffer;
    uint8_t order;
    uint8_t index;
} FIR_Filter;

/**
 * @brief             FIR Filter Initialization
 * 
 * @param fir         Pointer to FIR_Filter Struct
 * @param coefficient Filter Coefficient Array
 * @param buffer      Filter Buffer
 * @param order       Filter Order
 */
void FIR_Filter_Init(FIR_Filter *fir, float *coefficient, float *buffer, const uint8_t order);

/**
 * @brief        FIR Filter Update
 * 
 * @param fir    Pointer to FIR_Filter Struct
 * @param input  Filter Input 
 * @return float Filter Output
 */
float FIR_Filter_Update(FIR_Filter *fir, float input);

#endif /* FIR_FILTER_H */
/**
 * @file FIR_Filter.c
 * @author Talha Sarı (talha.sari@outlook.com.tr)
 * @brief FIR Filter Implementation in C
 * @version v1.0
 * @date 2021-06-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "FIR_Filter.h"

/**
 * @brief             FIR Filter Initialization
 * 
 * @param fir         Pointer to FIR_Filter Struct
 * @param coefficient Filter Coefficient Array
 * @param buffer      Filter Buffer
 * @param order       Filter Order
 */
void FIR_Filter_Init(FIR_Filter *fir, float *coefficient, float *buffer, const uint8_t order)
{
    fir->out = 0.0f;
    fir->coefficient = coefficient;
    fir->buffer = buffer;
    fir->order = order;
    fir->index = 0;

    for (uint8_t i = 0; i < order; i++) {
        fir->buffer[i] = 0.0f;
    }
}

/**
 * @brief        FIR Filter Update
 * 
 * @param fir    Pointer to FIR_Filter Struct
 * @param input  Filter Input 
 * @return float Filter Output
 */
float FIR_Filter_Update(FIR_Filter *fir, float input)
{
    fir->buffer[fir->index] = input;

    uint8_t getIndex = fir->index;

    fir->out = 0.0f;
    for (uint8_t i = 0; i < fir->order; i++) {
        fir->out = fir->out + fir->coefficient[i] * fir->buffer[getIndex];
        if (getIndex == 0) {
            getIndex = fir->order - 1;
        } else {
            getIndex--;
        }
    }

    fir->index++;
    if (fir->index == fir->order) {
        fir->index = 0;
    }

    return fir->out;
}
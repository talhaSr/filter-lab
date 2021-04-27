/**
 * @file HighPassFilter.h
 * @author Talha Sarı (talha.sari@outlook.com.tr)
 * @brief A High-pass Filter Implementation in C
 * @version v1.0
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef HIGH_PASS_FILTER_H
#define HIGH_PASS_FILTER_H

/* Macros */
#define PI              3.141592
#define __DELTAT(fs)    (1.0F / fs)
#define __ALPHA(fc, T)  (1.0F / ((2.0F * PI * T * fc) + 1.0F))

/* Filter HandleTypeDef */
typedef struct HighPassFilter
{
    float input[2];
    float alpha;
    float output[2];
} HighPassFilter;

/* Functions */
void HighPassFilter_Init(HighPassFilter *filter, float cutoffFreq, float samplePeriod);
float HighPassFilter_Update(HighPassFilter *filter, float input);

#endif /* HIGH_PASS_FILTER_H */
/*
 * Led.c
 *
 *  Created on: Mar 14, 2024
 *      Author: Arthur
 */


#include "Led.h"



void LedStart(void) {
    LL_TIM_EnableCounter(TIM2);
    LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH2);
}

void LedSetValue(uint8_t val) {
LL_TIM_OC_SetCompareCH2(TIM2, val);
}

void LedPulse(void) {
    static uint8_t brightness = 0;
    static uint8_t direction = 1;

    if (direction) {
        brightness++;
        if (brightness >= 255) {
            direction = 0;
        }
    } else {
        brightness--;
        if (brightness == 0) {
            direction = 1;
        }
    }

    LedSetValue(brightness);
}

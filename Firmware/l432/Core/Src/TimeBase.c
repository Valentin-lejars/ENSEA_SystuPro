/*
 * TimeBase.c
 *
 *  Created on: Mar 14, 2024
 *      Author: Arthur
 */


#include "TimeBase.h"

void TimeBaseStartIT(void){
	TIM15 -> DIER |= TIM_DIER_UIE;
	LL_TIM_EnableCounter(TIM15);
}

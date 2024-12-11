/*
 * HCSR04.cpp
 *
 *  Created on: Dec 11, 2024
 *      Author: Michin
 */

#include <sensors/hcsr04.hpp>


uint32_t HCSR04::ReadDistance() {
	return HAL_TIM_ReadCapturedValue(&handler, TIM_CHANNEL_1);
}




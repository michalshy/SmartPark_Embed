/*
 * HCSR04.hpp
 *
 *  Created on: Dec 11, 2024
 *      Author: Michin
 */

#ifndef SENSORS_HCSR04_HPP_
#define SENSORS_HCSR04_HPP_

#include "tim.h"
#include "sensors_structs/hc_structs.hpp"

class HCSR04 {
	TIM_HandleTypeDef handler;
	Cords cords;
public:
	HCSR04(TIM_HandleTypeDef _handler, Cords _cords):
		handler(_handler),
		cords(_cords) {};

	uint32_t ReadDistance();
};

#endif /* SENSORS_HCSR04_HPP_ */

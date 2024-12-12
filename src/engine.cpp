/*
 * Engine.cpp
 *
 *  Created on: Nov 14, 2024
 *      Author: Michin
 */

#include <engine.hpp>

Engine::Engine() {
	//Empty
}

void Engine::Init(){
	HAL_TIM_IC_Start(&htim2, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_3);
	mInit = true;
}

void Engine::Loop(){
	HCSR04 _hc(htim2, Cords{0,0});
	while(mInit)
	{
		//MX_LWIP_Process();

		printf("value = %lu\n", _hc.ReadDistance());
		HAL_Delay(1000);
	}
}


/*
 * Engine.hpp
 *
 *  Created on: Nov 14, 2024
 *      Author: Michin
 */

#ifndef ENGINE_HPP_
#define ENGINE_HPP_

#include <stdio.h>
#include "main.h"
#include "tim.h"
//#include "lwip.h"
#include "sensors/hcsr04.hpp"



class Engine {
	bool mInit = false;
public:
	Engine();
	void Init();
	void Loop();
	~Engine() = default;
};


#endif /* ENGINE_HPP_ */

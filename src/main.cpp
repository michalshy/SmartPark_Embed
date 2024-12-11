/*
 * main.cpp
 *
 *  Created on: Nov 14, 2024
 *      Author: Michin
 */

#include <engine.hpp>
#include "main.hpp"

void App()
{
	Engine eng = Engine();
	eng.Init();
	eng.Loop();
}



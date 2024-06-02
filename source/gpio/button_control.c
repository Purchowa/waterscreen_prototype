/*
 * button_control.c
 *
 *  Created on: 2 cze 2024
 *      Author: purch
 */
#include "button_control.h"

#include "pin_mux.h"
#include "fsl_gpio.h"

bool isS3ButtonPressed(){
	return (GPIO_PinRead(BOARD_INITBUTTONSPINS_S3_GPIO, BOARD_INITBUTTONSPINS_S3_PORT, BOARD_INITBUTTONSPINS_S3_PIN) == 0);
}

bool isS2ButtonPressed(){
	return (GPIO_PinRead(BOARD_INITBUTTONSPINS_S2_GPIO, BOARD_INITBUTTONSPINS_S2_PORT, BOARD_INITBUTTONSPINS_S2_PIN) == 0);
}

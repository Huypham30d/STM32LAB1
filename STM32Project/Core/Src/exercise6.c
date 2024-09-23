/*
 * exercise6.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Admin
 */
#include "exercise6.h"

void init_ex6(){
	HAL_GPIO_WritePin(led0_GPIO_Port, led0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led3_GPIO_Port, led3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_RESET);
}
int led_state = 1;
void ex6_run(){
	switch(led_state){
	case 1:
		HAL_GPIO_TogglePin(led11_GPIO_Port, led11_Pin);
		HAL_GPIO_TogglePin(led0_GPIO_Port, led0_Pin);
		led_state++;
		break;
	case 2:
		HAL_GPIO_TogglePin(led0_GPIO_Port, led0_Pin);
		HAL_GPIO_TogglePin(led1_GPIO_Port, led1_Pin);
		led_state++;
		break;
	case 3:
			HAL_GPIO_TogglePin(led1_GPIO_Port, led1_Pin);
			HAL_GPIO_TogglePin(led2_GPIO_Port, led2_Pin);
			led_state++;
			break;
	case 4:
			HAL_GPIO_TogglePin(led2_GPIO_Port, led2_Pin);
			HAL_GPIO_TogglePin(led3_GPIO_Port, led3_Pin);
			led_state++;
			break;
	case 5:
			HAL_GPIO_TogglePin(led3_GPIO_Port, led3_Pin);
			HAL_GPIO_TogglePin(led4_GPIO_Port, led4_Pin);
			led_state++;
			break;
	case 6:
			HAL_GPIO_TogglePin(led4_GPIO_Port, led4_Pin);
			HAL_GPIO_TogglePin(led5_GPIO_Port, led5_Pin);
			led_state++;
			break;
	case 7:
			HAL_GPIO_TogglePin(led5_GPIO_Port, led5_Pin);
			HAL_GPIO_TogglePin(led6_GPIO_Port, led6_Pin);
			led_state++;
			break;
	case 8:
			HAL_GPIO_TogglePin(led6_GPIO_Port, led6_Pin);
			HAL_GPIO_TogglePin(led7_GPIO_Port, led7_Pin);
			led_state++;
			break;
	case 9:
			HAL_GPIO_TogglePin(led7_GPIO_Port, led7_Pin);
			HAL_GPIO_TogglePin(led8_GPIO_Port, led8_Pin);
			led_state++;
			break;
	case 10:
			HAL_GPIO_TogglePin(led8_GPIO_Port, led8_Pin);
			HAL_GPIO_TogglePin(led9_GPIO_Port, led9_Pin);
			led_state++;
			break;
	case 11:
			HAL_GPIO_TogglePin(led9_GPIO_Port, led9_Pin);
			HAL_GPIO_TogglePin(led10_GPIO_Port, led10_Pin);
			led_state++;
			break;
	case 12:
			HAL_GPIO_TogglePin(led10_GPIO_Port, led10_Pin);
			HAL_GPIO_TogglePin(led11_GPIO_Port, led11_Pin);
			led_state = 1;
			break;
	default:
		break;
	}
}


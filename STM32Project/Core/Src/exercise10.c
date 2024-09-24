/*
 * exercise10.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Admin
 */
#include "exercise10.h"

void setNumberOnClock(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(led0_GPIO_Port, led0_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(led3_GPIO_Port, led3_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_RESET);
		break;
	case 10:
		HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_RESET);
		break;
	case 11:
		HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}
void clearNumberOnClock(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(led0_GPIO_Port, led0_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, GPIO_PIN_SET);
			break;
		case 3:
			HAL_GPIO_WritePin(led3_GPIO_Port, led3_Pin, GPIO_PIN_SET);
			break;
		case 4:
			HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, GPIO_PIN_SET);
			break;
		case 5:
			HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, GPIO_PIN_SET);
			break;
		case 6:
			HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_SET);
			break;
		case 7:
			HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_SET);
			break;
		case 9:
			HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_SET);
			break;
		case 10:
			HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_SET);
			break;
		case 11:
			HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_SET);
			break;
		default:
			break;
		}
}
void clearAllClock(){
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
		HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_SET);
}


void init_ex10(){
	clearAllClock();
}
//counter
int hour_count = 0;
int min_count = 0;
int sec_count = 0;
void ex10_run(){
//hour = hour%12;
//min = min%5;
//sec = sec%5
	//begin sec_condition
	if (sec_count >= 60){
		//check sec truoc co bi trung k
		if ((sec_count/5-1) != (min_count/5) && (sec_count/5-1) != (hour_count) ){
			clearNumberOnClock(sec_count/5-1);
		}
		min_count++;
		sec_count = 0;
	}
	if ((sec_count/5-1) != (min_count/5) && (sec_count/5-1) != (hour_count) ){
		clearNumberOnClock(sec_count/5-1);
	}
	setNumberOnClock(sec_count/5);
	sec_count++;
	//end sec_condition

	//begin min_condition
	if (min_count >= 60){
		if ((min_count/5 - 1) != sec_count/5 && (min_count/5 - 1) != hour_count){
			clearNumberOnClock(min_count/5-1);
		}
		hour_count++;
		min_count = 0;
	}
	if (min_count/5 - 1 != sec_count/5 && min_count/5 - 1 != hour_count){
		clearNumberOnClock(min_count/5-1);
	}
	setNumberOnClock(min_count/5);
	//end min_condition

	//begin hour_condition
	if(hour_count >=12){
		if(((hour_count-1) != (min_count/5))&& ((hour_count-1) != (sec_count/5))){
			clearNumberOnClock(hour_count-1);
		}
		hour_count = 0;
	}
	if(((hour_count-1) != (min_count/5))&& ((hour_count-1) != (sec_count/5))){
		clearNumberOnClock(hour_count-1);
	}
	setNumberOnClock(hour_count);
}


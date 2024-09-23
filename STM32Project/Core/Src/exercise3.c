/*
 * exercise3.c
 *
 *  Created on: Sep 23, 2024
 *      Author: Admin
 */
#include "exercise3.h"
//state
int led_state1 = LED_GREEN;
int led_state2 = LED_RED;
//led1 count
int led_green1_count = 4;
int led_yellow1_count = 2;
int led_red1_count = 5;
//led2 count
int led_green2_count = 3;
int led_yellow2_count = 2;
int led_red2_count = 6;
void init_ex3(){
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);
}
void led_green_1_on(){
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
}
void led_green_1_off(){
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
}
void led_yellow_1_on(){
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
}
void led_yellow_1_off(){
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
}
void led_red_1_on(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
}
void led_red_1_off(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
}
void led_green_2_on(){
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_RESET);
}
void led_green_2_off(){
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);
}
void led_yellow_2_on(){
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_RESET);
}
void led_yellow_2_off(){
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);
}
void led_red_2_on(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_RESET);
}
void led_red_2_off(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);
}
void ex3_run(){
	switch(led_state1){
		case LED_GREEN:
			led_green_1_on();
			led_green1_count--;
			if(led_green1_count == 0){
				led_state1 = LED_YELLOW;
				led_green1_count = 3;
				led_green_1_off();
				led_yellow_1_on();
			}
			break;
		case LED_YELLOW:
			led_yellow_1_on();
			led_yellow1_count--;
			if(led_yellow1_count == 0){
				led_state1 = LED_RED;
				led_yellow1_count = 2;
				led_yellow_1_off();
				led_red_1_on();
			}
			break;
		case LED_RED:
				led_red_1_on();
				led_red1_count--;
				if(led_red1_count == 0){
					led_state1 = LED_GREEN;
					led_red1_count = 5;
					led_red_1_off();
					led_green_1_on();
				}
			break;
		default:
			break;
	}

	switch(led_state2){
			case LED_GREEN:
				led_green_2_on();
				led_green2_count--;
				if(led_green2_count == 0){
					led_state2 = LED_YELLOW;
					led_green2_count = 3;
					led_green_2_off();
					led_yellow_2_on();
				}
				break;
			case LED_YELLOW:
				led_yellow_2_on();
				led_yellow2_count--;
				if(led_yellow2_count == 0){
					led_state2 = LED_RED;
					led_yellow2_count = 2;
					led_yellow_2_off();
					led_red_2_on();
				}
				break;
			case LED_RED:
					led_red_2_on();
					led_red2_count--;
					if(led_red2_count == 0){
						led_state2 = LED_GREEN;
						led_red2_count = 5;
						led_red_2_off();
						led_green_2_on();
					}
				break;
			default:
				break;
		}
}


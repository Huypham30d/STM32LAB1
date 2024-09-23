/*
 * exercise2.c
 *
 *  Created on: Sep 23, 2024
 *      Author: Admin
 */

#include "exercise2.h"

int led_state = LED_RED;
int led_red_count = 5;
int led_green_count = 3;
int led_yellow_count = 2;

void init_ex2(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void led_red_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
}
void led_red_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
}
void led_green_on(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
}
void led_green_off(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}
void led_yellow_on(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void led_yellow_off(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void ex2_run(){
	switch(led_state){
		case LED_RED:
			led_red_count--;
			led_red_on();
			if (led_red_count == 0){
				led_state = LED_GREEN;
				led_red_count = 5;
				led_red_off();
				led_green_on();
			}
			break;
		case LED_GREEN:
			led_green_count--;
			led_green_on();
			if (led_green_count == 0){
				led_state = LED_YELLOW;
				led_green_count = 3;
				led_green_off();
				led_yellow_on();
			}
			break;
		case LED_YELLOW:
			led_yellow_count--;
			led_yellow_on();
			if (led_yellow_count == 0){
				led_state = LED_RED;
				led_yellow_count = 2;
				led_yellow_off();
				led_red_on();
			}
			break;
		default:
			break;
	}
}


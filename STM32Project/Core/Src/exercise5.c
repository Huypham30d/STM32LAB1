#include "exercise5.h"

int led_status_1 = LED_GREEN;

int led_yellow_count_1 = 2;
int led_red_count_1	   = 5;
int led_green_count_1  = 4;


int led_status_2 = LED_RED;

int led_yellow_count_2 = 2;
int led_red_count_2	   = 6;
int led_green_count_2  = 3;

void init_exercise5(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);

}
void led_green_1_off(){
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_SET);
}
void led_green_1_on(){
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}
void led_yellow_1_off(){
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_SET);
}
void led_yellow_1_on(){
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_RESET);
}
void led_red_1_off(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_SET);
}
void led_red_1_on(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_RESET);
}

void led_green_2_off(){
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);
}
void led_green_2_on(){
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}
void led_yellow_2_off(){
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_SET);
}
void led_yellow_2_on(){
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
}
void led_red_2_off(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_SET);
}
void led_red_2_on(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
}
void LEDA(int num)
{
	switch(num){
		case 0:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}
void LEDB(int num)
{
	switch(num){
		case 0:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}
void exercise5_run(){
	switch(led_status_1){
			case LED_GREEN:
				led_green_count_1--;
				LEDA(led_green_count_1);
				led_green_1_on();
				if(led_green_count_1==0){
					led_status_1=LED_YELLOW;
					led_green_count_1=3;
					led_green_1_off();
					led_yellow_1_on();
					LEDA(2);
				}
				break;
			case LED_YELLOW:
				led_yellow_count_1--;
				LEDA(led_yellow_count_1);
				led_yellow_1_on();
				if(led_yellow_count_1==0){
					led_status_1=LED_RED;
					led_yellow_count_1=2;
					led_yellow_1_off();
					led_red_1_on();
					LEDA(5);
				}
				break;
			case LED_RED:
				led_red_count_1--;
				LEDA(led_red_count_1);
				led_red_1_on();
				if(led_red_count_1==0){
					led_status_1=LED_GREEN;
					led_red_count_1=5;
					led_red_1_off();
					led_green_1_on();
					LEDA(3);
				}
				break;
			default:
				break;
		}
	switch(led_status_2){
			case LED_GREEN:
				led_green_count_2--;
				LEDB(led_green_count_2);
				led_green_2_on();
				if(led_green_count_2==0){
					led_status_2=LED_YELLOW;
					led_green_count_2=3;
					led_green_2_off();
					led_yellow_2_on();
					LEDB(2);
				}
				break;
			case LED_YELLOW:
				led_yellow_count_2--;
				LEDB(led_yellow_count_2);
				led_yellow_2_on();
				if(led_yellow_count_2==0){
					led_status_2=LED_RED;
					led_yellow_count_2=2;
					led_yellow_2_off();
					led_red_2_on();
					LEDB(5);
				}
				break;
			case LED_RED:
				led_red_count_2--;
				LEDB(led_red_count_2);
				led_red_2_on();
				if(led_red_count_2==0){
					led_status_2=LED_GREEN;
					led_red_count_2=5;
					led_red_2_off();
					led_green_2_on();
					LEDB(3);
				}
				break;
			default:
				break;
		}
}

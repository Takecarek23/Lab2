/*
 * software_timer.c
 *
 *  Created on: Sep 8, 2025
 *      Author: TRONG
 */

#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;

void setTimer1(int duration) {
	timer1_counter = duration; // Chia 10 do 10ms
	timer1_flag = 0;
}

void timerRun() {
	if (timer1_counter > 0) {
		timer1_counter--;
		if (timer1_counter <= 0) {
			timer1_flag = 1;
		}
	}
}

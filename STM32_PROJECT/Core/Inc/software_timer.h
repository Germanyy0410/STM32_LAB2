/*
 * software_timer.h
 *
 *  Created on: 25 thg 9, 2023
 *      Author: ProX
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag = 0;
extern int timer1_flag = 0;

void setTimer0(int duration);
void setTimer1(int duration);

void timerRun_0();
void timerRun_1();

#endif /* INC_SOFTWARE_TIMER_H_ */

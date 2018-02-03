/*
 * lsd.c
 *
 *  Created on: 29 Nov 2017
 *      Author: Mary
 */

#include "lsd.h"
#include "stm32f1xx_hal.h"
#include "gpio.h"
#include <time.h>
#include <string.h>

#define L0 1
#define L1 2
#define L2 4
#define L3 8
#define L4 16
#define L5 32
#define L6 64
#define L7 128
#define LALL 255

#define DELAY_TIME 5

const int chA[]={255,255,152,152,255,255,0};
const int chB[]={255,255,153,153,153,102,0};
const int chC[]={255,255,195,195,195,195,0};
const int chD[]={255,255,219,219,255,126,0};
const int chE[]={255,255,219,219,195,195,0};
const int chF[]={255,255,216,216,192,192,0};
const int chG[]={126,255,195,133,231,102,0};
const int chH[]={255,255,24,24,255,255,0};
const int chI[]={0,195,255,255,195,0,0};
const int chJ[]={6,199,195,255,254,192,0};
const int chK[]={255,255,24,60,231,195,0};
const int chL[]={255,255,3,3,3,0,0};
const int chM[]={255,255,96,48,96,255,255};
const int chN[]={255,255,96,48,24,255,255};
const int chO[]={126,255,195,195,255,126,0};
const int chP[]={255,255,216,216,248,248,0};
const int chQ[]={126,255,129,131,255,126,1};
const int chR[]={255,255,216,220,247,99,0};
const int chS[]={102,247,147,147,223,78,0};
const int chT[]={192,192,255,255,192,192,0};
const int chU[]={254,255,3,3,255,254,0};
const int chV[]={224,252,31,3,31,252,224};
const int chW[]={LALL, LALL, L1, L2, L1, LALL, LALL};
const int chX[]={195,247,62,24,62,247,195};
const int chY[]={192,240,59,63,252,240,0};
const int chZ[]={0,199,207,219,243,227,0};

double getSpeed ()
{
	double period = 0;
	clock_t begin = clock();
	clock_t end = clock();

	int cur_value = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0);
	while (cur_value == HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0)) {
		begin = clock();
	}
	while (cur_value != HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0)) {
		end = clock();
	}
	period = (double)(end-begin)/CLOCKS_PER_SEC;
	period *= 2;
	period *= 1000;
	return period;
}

void myDelayGlob(int ms)
{

	for(int i = 0; i<ms*215; i++){
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, GPIO_PIN_SET);
	};
}

void myDelay(int ms)
{

	for(int i = 0; i<ms*107; i++){
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, GPIO_PIN_SET);
	};
}

void displayLine (int line)
{

	if (line>=L7) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
		line -=L7;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);}

	if (line>=L6) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
		line -=L6;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);}

	if (line>=L5) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
		line -=L5;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);}

	if (line>=L4) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
		line -=L4;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);}

	if (line>=L3) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
		line -=L3;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);}

	if (line>=L2) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
		line -=L2;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);}

	if (line>=L1) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
		line -=L1;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);}

	if (line>=L0) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
		line -=L0;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);}

}

void displayChar(char ch)
{

	int aux;
	if (ch == 'A') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chA[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'B') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chB[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'C') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chC[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'D') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chD[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'E') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chE[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'F') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chF[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'G') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chG[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'H') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chH[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'I') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chI[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'J') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chJ[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'K') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chK[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}


	if (ch == 'L') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chL[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'M') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chM[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}


	if (ch == 'N') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chN[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'O') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chO[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'P') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chP[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'Q') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chQ[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'R') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chR[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'S') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chS[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'T') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chT[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'U') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chU[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'V') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chV[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'W') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chW[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'X') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chX[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'Y') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chY[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'Z') {
		for (aux=0; aux<(7); aux++) {
			displayLine(chZ[aux]);
			myDelay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

}

void displayString(char* str)
{
	int it;
	for(it=0;it <= strlen(str); it++){
		displayChar(str[it]);

	}
}

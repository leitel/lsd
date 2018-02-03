/*
 * lsd.h
 *
 *  Created on: 29 Nov 2017
 *      Author: Mary
 */

#ifndef LSD_H_
#define LSD_H_

#include <time.h>

/*
 * Top               Bottom
 * 128 64 32 16 8 4 2 1
 *  A7 A6 A5 A4 A3 A2 A1 A0
 * total = 255
 *
 *
 *
 */


/*
int a[] = {L0+L2+L3, LALL-L7-L6, LALL-L0-L1, L7+L6+L4+L3,LALL-L0-L1,LALL-L7-L6,
		L0+L2+L3};

int b[] = {LALL, LALL, L7+L4+L0, LALL-L2, LALL, L6+L1+L2+L3};

int C[] = {L2+L3+L4+L5, LALL-L0, L7+L6+L1+L0, L7+L0+L1, L7+L0, L7+L0+L1,
		L7+L1};

int d[] = {LALL, LALL, L0+L7, L0+L7+L1, L0+L7+L1+L6, LALL-L0, LALL-L7-L0};

int e[] = {LALL, LALL, L7+L4+L3+L1+L0, L7+L4+L3+L1+L0, L7+L4+L1+L0};

int f[] = {LALL, LALL, L7+L4+L3, L7+L4+L3, L7+L4};

int g[] = {L2+L3+L4+L5, LALL-L0-L7, L7+L6+L0+L1, L7+L0+L1, L7+L0+L3+L4,
		LALL-L6-L5, LALL-L6-L5};

int h[] = {LALL, LALL, L3+L4, L3+L4, L3+L4, LALL, LALL};

int i[] = {LALL, LALL};

int j[] = {L0, L0+L1, LALL, LALL-L0};

int k[] = {LALL, LALL, L5+L4+L3, LALL-L0, LALL-L5-L4, L0+L1+L7};

int l[] = {LALL, LALL, LALL, L0+L1, L0+L1, L0+L1};

int m[] = {LALL, LALL, L7+L6+L5+L4, LALL-L7, L0+L1+L2+L3, LALL-L0-L7-L6,
		L7+L6+L5+L4, LALL, LALL};

int n[] = {LALL, LALL, L7+L6+L5+L4, L5+L4+L3+L2, L0+L1+L2+L3, LALL, LALL};

int o[] = {L2+L3+L4+L5, L2+L3+L4+L5+L6+L1, L7+L6+L0+L1+L2, L7+L0+L1, L0+L7,
		L0+L1+L6+L7, LALL, LALL-L7-L0};

int p[] = {LALL, LALL, L7+L3, L7+L3+L6+L4, L7+L6+L5+L4+L3, L6+L5};

int q[] = {L2+L3+L4+L5, L2+L3+L4+L5+L6+L1, L7+L6+L0+L1+L2, L7+L0+L1, L0+L7,
		L0+L1+L6+L7, LALL, LALL-L7, L1+L0, L0};

int r[] = {LALL, LALL, L7+L4+L3, L7+L4+L3, LALL, LALL-L3};

int s[] = {L0+L5, LALL-L2-L3-L4,LALL-L3-L2-L1, L7+L4+L3+L1+L0, LALL-L6-L5,
		L1+L2+L3+L7};

int t[] = {L7, L7, L7+L6, LALL, LALL, L7, L7};

int u[] = {LALL-L0, LALL, L0+L1, L0, L0+L1, LALL, LALL-L0};

int v[] = {L7+L6+L5, LALL-L0-L1, LALL-L7-L6, L0+L1+L2, LALL-L7-L6,
		LALL-L0-L1-L2, L7+L6};

int w[] = {L0, LALL-L0-L1-L2, L0+L1+L2+L3, LALL-L7, L4+L5+L6+L7, LALL-L0,
		LALL-L5-L6-L7, LALL-L0-L1, L7+L6};

int x[] = {L7+L0+L1, LALL-L4-L3, L2+L3+L4+L5, LALL, L7+L6+L0+L1, L0};

int y[] = {L7, L7+L6+L5, LALL-L7, LALL-L7-L6-L5, L4+L5+L6, L7+L6+L5, L7};

int z[] = {L7+L0+L1, L7+L0+L1+L2+L3, LALL-L6-L5, LALL-L2, L7+L6+L5+L0+L1,
		L0+L1+L7+L6};
*/
void displayLine (int line);
void displayChar (char ch);
void displayString (char* str);
void myDelay (int ms);
void myDelayGlob (int ms);
double getSpeed ();


#endif /* LSD_H_ */

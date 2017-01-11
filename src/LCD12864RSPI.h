/*
  @Author:TONYLABS
  @Date:2012/12/21
  @Function: Driver 12864 LCD Module
*/

#ifndef _LCD12864RSPI_H
#define _LCD12864RSPI_H

#include <Arduino.h>
#include <avr/pgmspace.h>
#include <inttypes.h>


class LCD12864RSPI
{
	private:
		void delay();
		static const int DELAYTIME = 80; // 80 ¦Ìs
		uint8_t clockPin, latchPin, dataPin;

	public:
		LCD12864RSPI(uint8_t, uint8_t, uint8_t);
		void init(uint8_t, uint8_t, uint8_t);
		void writeByte(int);
		void writeCommand(int);
		void writeData(int);
		void clear();
		void displayString(int, int, uint8_t *, int);
		void displaySig(int, int, int);
		void drawFullScreen(uint8_t *);

};


#endif
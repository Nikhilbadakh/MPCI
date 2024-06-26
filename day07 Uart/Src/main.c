/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
#include "uart.h"
#include "led.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)

#endif

int main(void)
{
	SystemInit();
	UartInit(BAUD_9600);
	UartPuts("Enter string ...\r\n");

	LedInit(LED_RED);
	LedInit(LED_BLUE);
    char str[32];
	int choice;

	do
	{
		UartPuts("1 \n red led on \r");
		UartPuts("2\n red led off \r");
		UartPuts("3\n blue led on \r");
		UartPuts("4\n blue led off \r");




		UartGets(str);

		sscanf(str,"%d", &choice);

		switch(choice)
	     {
	     case 1 :
                 LedOn(LED_RED);
	    	 break;

	     case 2:

	    	 LedOff(LED_RED);
	    	 break;

	     case 3:
	    	 LedOn(LED_BLUE);
		      break;

	     case 4:
	    	 LedOff(LED_BLUE);
	    	 break;
}
	}while(choice!=0);

return 0;

	}



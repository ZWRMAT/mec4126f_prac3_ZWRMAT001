// Description----------------------------------------------------------------|
/* Code that constantly counts from zero to the age of the user
 * and displays that count on the LCD of the STM32 microcontroller
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>

// GLOBAL VARIABLES ----------------------------------------------------------|
struct age_data
{
	int date;
	int month;
	int year;
	int age;
};

struct age_data my_age;

// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);                                                   //COMPULSORY
void init_LCD(void);
void delay();

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{
	init_LCD();
	char age_string[3];

	my_age.date = 12;
	my_age.month = 9;
	my_age.year = 2001;
	my_age.age = 21;

	while(1)
	{
		for(int i=0; i<=my_age.age; i++){
			sprintf(age_string, "%d", i);
			lcd_putstring(age_string);
			delay(200000);
			lcd_command(CLEAR);
		}
	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|





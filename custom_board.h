#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

// LEDs and buttons definition for WS board
#define LED_GREEN			0
#define LED_RED				10
#define BSP_LED_0			LED_GREEN
#define BSP_LED_1			LED_RED

#define LEDS_NUMBER			2
#define LEDS_LIST			{LED_GREEN, LED_RED}
#define LEDS_ACTIVE_STATE	1

#define BUTTON_0			30
#define BUTTON_1			11
#define BSP_BUTTON_0		BUTTON_0
#define BSP_BUTTON_1		BUTTON_1
#define BUTTON_PULL			NRF_GPIO_PIN_NOPULL

#define BUTTONS_NUMBER		2
#define BUTTONS_LIST		{BUTTON_0, BUTTON_1}
#define BUTTONS_ACTIVE_STATE	0

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}

#endif

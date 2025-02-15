#pragma once

/* Defines for the split keyboard setup */
#define SERIAL_USART_DRIVER SD3         // USART 3
#define SERIAL_USART_TX_PIN B10
#define SERIAL_USART_RX_PIN B11
#define SERIAL_USART_TX_PAL_MODE 7
#define SERIAL_USART_RX_PAL_MODE 7
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_PIN_SWAP

#define USB_VBUS_PIN C6
#define SPLIT_HAND_PIN A0

/* Defines for the RGB matrix */
#ifdef RGB_MATRIX_ENABLE
#   define WS2812_PWM_DRIVER PWMD3
#   define WS2812_PWM_CHANNEL 4
#   define WS2812_PWM_PAL_MODE 10
#   define WS2812_DMA_STREAM STM32_DMA1_STREAM2
#   define WS2812_DMA_CHANNEL 2
#   define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM3_UP
#endif

/* Tap dance settings */
#define TAPPING_TERM 180
#define QUICK_TAP_TERM 0

/* Auto shift settings */
#define AUTO_SHIFT_TIMEOUT 200	
#define NO_AUTO_SHIFT_ALPHA

// #define USE_I2C
#define EE_HANDS

// Added by Brian C. Arnold to support Vial.
#define VIAL_KEYBOARD_UID {0xBC, 0x99, 0xF2, 0x61, 0x45, 0x7C, 0xC8, 0xB9}
#define VIAL_UNLOCK_COMBO_ROWS {0,9}
#define VIAL_UNLOCK_COMBO_COLS {0,5}
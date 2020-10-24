/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define VCP_TX_Pin GPIO_PIN_2
#define VCP_TX_GPIO_Port GPIOA
#define controlSwitch_Pin GPIO_PIN_3
#define controlSwitch_GPIO_Port GPIOA
#define controlSwitch_EXTI_IRQn EXTI3_IRQn
#define relayControl_Pin GPIO_PIN_7
#define relayControl_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_15
#define VCP_RX_GPIO_Port GPIOA
#define LD3_Pin GPIO_PIN_3
#define LD3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
//WS2812
#define WS2812_FREQ											(800000) 			// it is fixed: WS2812 require 800kHz
#define TIMER_CLOCK_FREQ									(16000000)   	// can be modified - multiples of 0.8MHz are suggested
#define TIMER_PERIOD										(TIMER_CLOCK_FREQ / WS2812_FREQ)
#define LED_NUMBER											(16)					// how many LEDs the MCU should control?
#define LED_DATA_SIZE										(LED_NUMBER * 24)
#define RESET_SLOTS_BEGIN									(50)
#define RESET_SLOTS_END										(50)
#define WS2812_LAST_SLOT									(1)
#define LED_BUFFER_SIZE										(RESET_SLOTS_BEGIN + LED_DATA_SIZE + WS2812_LAST_SLOT + RESET_SLOTS_END)
#define WS2812_0											(TIMER_PERIOD / 3)				// WS2812's zero high time is long about one third of the period
#define WS2812_1											(TIMER_PERIOD * 2 / 3)		// WS2812's one high time is long about two thirds of the period
#define WS2812_RESET										(0)

#define TEST_TIME											(1)
#define BUTTON_TIMER_CLOCK_FREQ								(8000000)
#define BUTTON_TIMER_PERIOD 								(BUTTON_TIMER_CLOCK_FREQ * TEST_TIME)

#define CORRECT_TEMPERATURE									(29)

#define MAX_ERROR_COUNT										(2)
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

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
#include "stm32f1xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Speed1_Pin GPIO_PIN_0
#define Speed1_GPIO_Port GPIOA
#define Speed2_Pin GPIO_PIN_1
#define Speed2_GPIO_Port GPIOA
#define Linear_Pot1_Pin GPIO_PIN_4
#define Linear_Pot1_GPIO_Port GPIOA
#define Linear_Pot2_Pin GPIO_PIN_5
#define Linear_Pot2_GPIO_Port GPIOA
#define Linear_Pot3_Pin GPIO_PIN_6
#define Linear_Pot3_GPIO_Port GPIOA
#define Speed3_Pin GPIO_PIN_10
#define Speed3_GPIO_Port GPIOB
#define Speed3B11_Pin GPIO_PIN_11
#define Speed3B11_GPIO_Port GPIOB
#define Steering_Reset_Pin_Pin GPIO_PIN_10
#define Steering_Reset_Pin_GPIO_Port GPIOA
#define Steering_Reset_Pin_EXTI_IRQn EXTI15_10_IRQn
#define Steering_Input_White_Pin GPIO_PIN_11
#define Steering_Input_White_GPIO_Port GPIOA
#define Steering_Input_Green_Pin GPIO_PIN_12
#define Steering_Input_Green_GPIO_Port GPIOA
#define Steering_Input_Green_EXTI_IRQn EXTI15_10_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

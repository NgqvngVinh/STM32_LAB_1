/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
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
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  void display7SEG(int num) {
      switch (num) {
          case 0:
              //printf("Segments: a, b, c, d, e, f\n");
        	  HAL_GPIO_WritePin(GPIOB,a_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,b_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,c_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,d_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,e_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,f_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,g_Pin,GPIO_PIN_SET);
              break;
          case 1:
//              printf("Segments: b, c\n");
        	  HAL_GPIO_WritePin(GPIOB,a_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,b_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,c_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,d_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,e_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,f_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,g_Pin,GPIO_PIN_SET);
              break;
          case 2:
//              printf("Segments: a, b, d, e, g\n");
        	  HAL_GPIO_WritePin(GPIOB,a_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,b_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,c_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,d_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,e_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,f_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,g_Pin,GPIO_PIN_RESET);
              break;
          case 3:
//              printf("Segments: a, b, c, d, g\n");
        	  HAL_GPIO_WritePin(GPIOB,a_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,b_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,c_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,d_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,e_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,f_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,g_Pin,GPIO_PIN_RESET);
              break;
          case 4:
//              printf("Segments: b, c, f, g\n");
        	  HAL_GPIO_WritePin(GPIOB,a_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,b_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,c_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,d_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,e_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,f_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,g_Pin,GPIO_PIN_RESET);
              break;
          case 5:
//              printf("Segments: a, c, d, f, g\n");
        	  HAL_GPIO_WritePin(GPIOB,a_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,b_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,c_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,d_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,e_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(GPIOB,f_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(GPIOB,g_Pin,GPIO_PIN_RESET);
              break;
          case 6:
//              printf("Segments: a, c, d, e, f, g\n");
        	  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
              break;
          case 7:
//              printf("Segments: a, b, c\n");
        	  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_SET);
              break;
          case 8:
//              printf("Segments: a, b, c, d, e, f, g\n");
        	  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
              break;
          case 9:
//              printf("Segments: a, b, c, d, f, g\n");
        	  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
        	  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
        	  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
              break;
          default:
        	  break;
      }
  }

//  void display7SEG2(int num) {
//      switch (num) {
//          case 0:
//              //printf("Segments: a, b, c, d, e, f\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_SET);
//              break;
//          case 1:
////              printf("Segments: b, c\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_SET);
//              break;
//          case 2:
////              printf("Segments: a, b, d, e, g\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_RESET);
//              break;
//          case 3:
////              printf("Segments: a, b, c, d, g\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_RESET);
//              break;
//          case 4:
////              printf("Segments: b, c, f, g\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_RESET);
//              break;
//          case 5:
////              printf("Segments: a, c, d, f, g\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_RESET);
//              break;
//          case 6:
////              printf("Segments: a, c, d, e, f, g\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_RESET);
//              break;
//          case 7:
////              printf("Segments: a, b, c\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_SET);
//              break;
//          case 8:
////              printf("Segments: a, b, c, d, e, f, g\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_RESET);
//              break;
//          case 9:
////              printf("Segments: a, b, c, d, f, g\n");
//        	  HAL_GPIO_WritePin(a2_GPIO_Port,a2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(b2_GPIO_Port,b2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(c2_GPIO_Port,c2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(d2_GPIO_Port,d2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(e2_GPIO_Port,e2_Pin,GPIO_PIN_SET);
//        	  HAL_GPIO_WritePin(f2_GPIO_Port,f2_Pin,GPIO_PIN_RESET);
//        	  HAL_GPIO_WritePin(g2_GPIO_Port,g2_Pin,GPIO_PIN_RESET);
//              break;
//          default:
//      }
//  }


//int counter = 0; //b4



//b3 new
#define RED 0
#define YELLOW 1
#define GREEN 2

int counter=0; //b3,5
int led_status = RED;
int countdown = 0; //b5
//int countdown2 = 0;


  while (1)
  {

//b4
	  if( counter >= 10) counter = 0;
	  display7SEG ( counter ++) ;
	  HAL_Delay (1000) ;




//b3 new
//	  switch (led_status){
//	  case RED: //red 2 side green up down
//		  	  HAL_GPIO_WritePin(LR1_GPIO_Port,LR1_Pin,GPIO_PIN_SET);
//		  	  HAL_GPIO_WritePin(LY1_GPIO_Port,LY1_Pin,GPIO_PIN_RESET);
//		  	  HAL_GPIO_WritePin(LG1_GPIO_Port,LG1_Pin,GPIO_PIN_RESET);
//
//		  	  HAL_GPIO_WritePin(LR2_GPIO_Port,LR2_Pin,GPIO_PIN_RESET);
//		  	  HAL_GPIO_WritePin(LY2_GPIO_Port,LY2_Pin,GPIO_PIN_RESET);
//		  	  HAL_GPIO_WritePin(LG2_GPIO_Port,LG2_Pin,GPIO_PIN_SET);
//		  	  counter++;
//		  	  if(counter >3){ //green up down -> yellow
//		  		  HAL_GPIO_WritePin(LR2_GPIO_Port,LR2_Pin,GPIO_PIN_RESET);
//		  		  HAL_GPIO_WritePin(LY2_GPIO_Port,LY2_Pin,GPIO_PIN_SET);
//		  		  HAL_GPIO_WritePin(LG2_GPIO_Port,LG2_Pin,GPIO_PIN_RESET);
//		  	  }
//		  	  if(counter ==5){
//		  		  led_status = GREEN;
//		  		  counter = 0;
//		  	  }
//		  	  break;
//	  case GREEN:
//		  //red 2 side -> green, yellow up down -> red
//
//	  	  	  HAL_GPIO_WritePin(LR1_GPIO_Port,LR1_Pin,GPIO_PIN_RESET);
//			  HAL_GPIO_WritePin(LY1_GPIO_Port,LY1_Pin,GPIO_PIN_RESET);
//			  HAL_GPIO_WritePin(LG1_GPIO_Port,LG1_Pin,GPIO_PIN_SET);
//
//			  HAL_GPIO_WritePin(LR2_GPIO_Port,LR2_Pin,GPIO_PIN_SET);
//			  HAL_GPIO_WritePin(LY2_GPIO_Port,LY2_Pin,GPIO_PIN_RESET);
//			  HAL_GPIO_WritePin(LG2_GPIO_Port,LG2_Pin,GPIO_PIN_RESET);
//			  counter++;
//			  if(counter ==3){
//				  led_status = YELLOW;
//				  counter =0;
//			  }
//			  break;
//	  case YELLOW:
//		  //red 2 side -> yellow, red up down same
//			  HAL_GPIO_WritePin(LR1_GPIO_Port,LR1_Pin,GPIO_PIN_RESET);
//			  HAL_GPIO_WritePin(LY1_GPIO_Port,LY1_Pin,GPIO_PIN_SET);
//			  HAL_GPIO_WritePin(LG1_GPIO_Port,LG1_Pin,GPIO_PIN_RESET);
//
//			  HAL_GPIO_WritePin(LR2_GPIO_Port,LR2_Pin,GPIO_PIN_SET);
//			  HAL_GPIO_WritePin(LY2_GPIO_Port,LY2_Pin,GPIO_PIN_RESET);
//			  HAL_GPIO_WritePin(LG2_GPIO_Port,LG2_Pin,GPIO_PIN_RESET);
//			  counter++;
//			  if(counter ==2){
//			  led_status = RED;
//			  counter =0;
//			  }
//			  break;
//	  default:
//		  	  break;
//	  }
//		  	  HAL_Delay(1000);
//
//

//b5
	  	  switch (led_status){
	  	  case RED: //red 2 side green up down
	  		  	  HAL_GPIO_WritePin(LR1_GPIO_Port,LR1_Pin,GPIO_PIN_SET);
	  		  	  HAL_GPIO_WritePin(LY1_GPIO_Port,LY1_Pin,GPIO_PIN_RESET);
	  		  	  HAL_GPIO_WritePin(LG1_GPIO_Port,LG1_Pin,GPIO_PIN_RESET);

	  		  	  HAL_GPIO_WritePin(LR2_GPIO_Port,LR2_Pin,GPIO_PIN_RESET);
	  		  	  HAL_GPIO_WritePin(LY2_GPIO_Port,LY2_Pin,GPIO_PIN_RESET);
	  		  	  HAL_GPIO_WritePin(LG2_GPIO_Port,LG2_Pin,GPIO_PIN_SET);

	  		  	  countdown = 5 - counter;
	  		  	  display7SEG(countdown);
	  		  	  counter++;

	  		  	  if(counter >3){ //green up down -> yellow
	  		  		  HAL_GPIO_WritePin(LR2_GPIO_Port,LR2_Pin,GPIO_PIN_RESET);
	  		  		  HAL_GPIO_WritePin(LY2_GPIO_Port,LY2_Pin,GPIO_PIN_SET);
	  		  		  HAL_GPIO_WritePin(LG2_GPIO_Port,LG2_Pin,GPIO_PIN_RESET);
	  		  	  }
	  		  	  if(counter ==5){
	  		  		  led_status = GREEN;
	  		  		  counter = 0;
	  		  	  }
	  		  	  break;
	  	  case GREEN:
	  		  //red 2 side -> green, yellow up down -> red

	  	  	  	  HAL_GPIO_WritePin(LR1_GPIO_Port,LR1_Pin,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(LY1_GPIO_Port,LY1_Pin,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(LG1_GPIO_Port,LG1_Pin,GPIO_PIN_SET);

	  			  HAL_GPIO_WritePin(LR2_GPIO_Port,LR2_Pin,GPIO_PIN_SET);
	  			  HAL_GPIO_WritePin(LY2_GPIO_Port,LY2_Pin,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(LG2_GPIO_Port,LG2_Pin,GPIO_PIN_RESET);

	  			  countdown = 3 - counter;

	  			  display7SEG(countdown);

	  			  counter++;

	  			  if(counter ==3){
	  				  led_status = YELLOW;
	  				  counter =0;
	  			  }
	  			  break;
	  	  case YELLOW:
	  		  //red 2 side -> yellow, red up down same
	  			  HAL_GPIO_WritePin(LR1_GPIO_Port,LR1_Pin,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(LY1_GPIO_Port,LY1_Pin,GPIO_PIN_SET);
	  			  HAL_GPIO_WritePin(LG1_GPIO_Port,LG1_Pin,GPIO_PIN_RESET);

	  			  HAL_GPIO_WritePin(LR2_GPIO_Port,LR2_Pin,GPIO_PIN_SET);
	  			  HAL_GPIO_WritePin(LY2_GPIO_Port,LY2_Pin,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(LG2_GPIO_Port,LG2_Pin,GPIO_PIN_RESET);

	  			  countdown = 2 - counter;

	  			  display7SEG(countdown);

	  			  counter++;


	  			  if(counter ==2){
	  			  led_status = RED;
	  			  counter =0;
	  			  }
	  			  break;
	  	  default:
	  		  	  break;
	  	  }
	  		  	  HAL_Delay(1000);





  } //end while

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */

  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LR1_Pin|LY1_Pin|LG1_Pin|LR2_Pin
                          |LY2_Pin|LG2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, a_Pin|b_Pin|c_Pin|b2_Pin
                          |c2_Pin|d2_Pin|e2_Pin|f2_Pin
                          |g2_Pin|d_Pin|e_Pin|f_Pin
                          |g_Pin|a2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LR1_Pin LY1_Pin LG1_Pin LR2_Pin
                           LY2_Pin LG2_Pin */
  GPIO_InitStruct.Pin = LR1_Pin|LY1_Pin|LG1_Pin|LR2_Pin
                          |LY2_Pin|LG2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : a_Pin b_Pin c_Pin b2_Pin
                           c2_Pin d2_Pin e2_Pin f2_Pin
                           g2_Pin d_Pin e_Pin f_Pin
                           g_Pin a2_Pin */
  GPIO_InitStruct.Pin = a_Pin|b_Pin|c_Pin|b2_Pin
                          |c2_Pin|d2_Pin|e2_Pin|f2_Pin
                          |g2_Pin|d_Pin|e_Pin|f_Pin
                          |g_Pin|a2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/* ###################################################################
 **     Filename    : main.c
 **     Project     : SDP_2016
 **     Processor   : MKL25Z128VLK4
 **     Version     : Driver 01.01
 **     Compiler    : GNU C Compiler
 **     Date/Time   : 2016-07-30, 17:07, # CodeGen: 0
 **     Abstract    :
 **         Main module.
 **         This module contains user's application code.
 **     Settings    :
 **     Contents    :
 **         No public methods
 **
 ** ###################################################################*/
/*!
 ** @file main.c
 ** @version 01.01
 ** @brief
 **         Main module.
 **         This module contains user's application code.
 */
/*!
 **  @addtogroup main_module main module documentation
 **  @{
 */
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "SI.h"
#include "BitIoLdd1.h"
#include "CLK.h"
#include "BitIoLdd2.h"
#include "Camera_CLK_Interruption.h"
#include "TimerIntLdd1.h"
#include "TU1.h"
#include "AD_Converter.h"
#include "AdcLdd1.h"
#include "SerialCom.h"
#include "Enable_Motors.h"
#include "BitIoLdd4.h"
#include "Motor_A_In1.h"
#include "PwmLdd1.h"
#include "TU2.h"
#include "Motor_A_In2.h"
#include "PwmLdd2.h"
#include "Motor_B_In1.h"
#include "PwmLdd3.h"
#include "Motor_B_In2.h"
#include "PwmLdd4.h"
#include "Servomotor.h"
#include "PwmLdd5.h"
#include "TU3.h"
#include "SW2_Start_Button.h"
#include "BitIoLdd3.h"
#include "Power_Level1.h"
#include "BitIoLdd5.h"
#include "Power_Level2.h"
#include "BitIoLdd6.h"
#include "Power_Level3.h"
#include "BitIoLdd7.h"
#include "Power_Level4.h"
#include "BitIoLdd8.h"
#include "GreenLED.h"
#include "BitIoLdd10.h"
#include "BlueLED.h"
#include "BitIoLdd11.h"
#include "ErrorLED.h"
#include "BitIoLdd9.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "CameraController.h"
#include "MotorController.h"
#include "ServoController.h"
#include "BatteryController.h"
#include "SerialCommunication.h"
#include "GlobalVariables.h"



/* Global Variables */
volatile bool ApplicationEnd;

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable_Motors MISRA rule (6.3) checking. */
{
	/*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
	PE_low_level_init();
	/*** End of Processor Expert internal initialization.                    ***/

	// Enables motors
	Enable_Motors_SetVal();

	Servomotor_Enable();

	// Update the battery indicator LED
//	updateBatteryLevel();

	// Wait for the SW2 button to be pressed
	while (!SW2_Start_Button_GetVal());

	ApplicationEnd = FALSE;
	uint8 vetor[128];
	for (int i = 0; i < 128;i++)
		vetor[i] = i;

	// Program Loop
	while (!ApplicationEnd)
	{

		getRawImageMean(1);
//		sendArrayOfPixels(rawImage);
		sendArrayOfPixels(vetor);


		//setMotorsSpeed(100, 100);
		//setServoDirection(175);

		// Update the battery indicator LED
		updateBatteryLevel();
		//sendBatteryLevel();
	}
	// FAZER FUNÇÃO PARA FINALIZAÇÃO

	/*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
 ** @}
 */
/*
 ** ###################################################################
 **
 **     This file was created by Processor Expert 10.5 [05.21]
 **     for the Freescale Kinetis series of microcontrollers.
 **
 ** ###################################################################
 */

/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Servomotor.c
**     Project     : SDP_2016
**     Processor   : MKL25Z128VLK4
**     Component   : PWM
**     Version     : Component 02.241, Driver 01.01, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-11-29, 16:30, # CodeGen: 73
**     Abstract    :
**         This component implements a pulse-width modulation generator
**         that generates signal with variable duty and fixed cycle. 
**     Settings    :
**          Component name                                 : Servomotor
**          PWM or PPG device                              : TPM1_C0V
**          Duty compare                                   : 
**          Output pin                                     : ADC0_SE8/TSI0_CH0/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0
**          Output pin signal                              : 
**          Counter                                        : TPM1_CNT
**          Interrupt service/event                        : Disabled
**          Period                                         : 20 ms
**          Starting pulse width                           : 18.55 ms
**          Initial polarity                               : low
**          Same period in modes                           : no
**          Component uses entire timer                    : no
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Events enabled in init.                      : yes
**          CPU clock/speed selection                      : 
**            High speed mode                              : This component enabled
**            Low speed mode                               : This component disabled
**            Slow speed mode                              : This component disabled
**          Referenced components                          : 
**            PWM_LDD                                      : PWM_LDD
**     Contents    :
**         SetRatio16 - byte Servomotor_SetRatio16(word Ratio);
**         SetDutyUS  - byte Servomotor_SetDutyUS(word Time);
**         SetDutyMS  - byte Servomotor_SetDutyMS(word Time);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Servomotor.c
** @version 01.01
** @brief
**         This component implements a pulse-width modulation generator
**         that generates signal with variable duty and fixed cycle. 
*/         
/*!
**  @addtogroup Servomotor_module Servomotor module documentation
**  @{
*/         

/* MODULE Servomotor. */

#include "Servomotor.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Method      :  Servomotor_SetRatio16 (component PWM)
**     Description :
**         This method sets a new duty-cycle ratio. Ratio is expressed
**         as a 16-bit unsigned integer number. 0 - FFFF value is
**         proportional to ratio 0 - 100%. The method is available
**         only if it is not selected list of predefined values in
**         <Starting pulse width> property. 
**         Note: Calculated duty depends on the timer possibilities and
**         on the selected period.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Ratio           - Ratio to set. 0 - 65535 value is
**                           proportional to ratio 0 - 100%
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
** ===================================================================
*/
/*
byte Servomotor_SetRatio16(word Ratio)
**  This method is implemented as a macro. See Servomotor.h file.  **
*/

/*
** ===================================================================
**     Method      :  Servomotor_SetDutyUS (component PWM)
**     Description :
**         This method sets the new duty value of the output signal.
**         The duty is expressed in microseconds as a 16-bit
**         unsigned integer number.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Time            - Duty to set [in microseconds]
**                      (0 to --- us in high speed mode)
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
/*
byte Servomotor_SetDutyUS(word Time)
**  This method is implemented as a macro. See Servomotor.h file.  **
*/

/*
** ===================================================================
**     Method      :  Servomotor_SetDutyMS (component PWM)
**     Description :
**         This method sets the new duty value of the output signal.
**         The duty is expressed in milliseconds as a 16-bit
**         unsigned integer number.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Time            - Duty to set [in milliseconds]
**                      (0 to 20 ms in high speed mode)
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
/*
byte Servomotor_SetDutyMS(word Time)
**  This method is implemented as a macro. See Servomotor.h file.  **
*/

/* END Servomotor. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

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
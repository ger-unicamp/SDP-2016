/*
 * CameraController.h
 *
 *  Created on: 30/07/2016
 *      Author: marcelo
 */

#ifndef SOURCES_CAMERACONTROLLER_H_
#define SOURCES_CAMERACONTROLLER_H_

// Includes.
#include "PE_Types.h"
#include "ClockInterruption.h"
#include "SerialCommunication.h"


/* There are five states:
 * 1) HIGH_CLK.
 * 2) HALF_HIGH_CLK.
 * 3) LOW_CLK.
 * 4) HALF_LOW_CLK.
 * 5) WAIT_TRANSFER_CHARGE.
 */
enum clockState {HIGH_CLK, HALF_HIGH_CLK, LOW_CLK, HALF_LOW_CLK, WAIT_TRANSFER_CHARGE};

enum logicalLevel {LOW, HIGH};

int clockCounter;

extern uint8_t pixelArray[2][128];

int state;
int transferTime;
volatile int measuringCounter;

// Methods.
void cameraStartReading(bool serialTest);
void initializeCamera();
void testMode();


#endif /* SOURCES_CAMERACONTROLLER_H_ */

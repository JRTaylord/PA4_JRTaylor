/*
 * PA4_the_murder - Jacob Tutlis - jjtutlis - James Taylor - jrtaylor
 *  Created on: Feb 12, 2018
 *      Author: jjtutlis
 */

#include <iostream>
#include "teller.h"

/**
 * Constructor for teller class
 * generates random idle time
 */
Teller::Teller(){
	// generates random idle time between 0 - 160 minutes
	// converts to minutes
	idleTime = (rand() % IDLE_MAX) / 60;
	activeTime = -1;
}

/**
 * getter for active time
 * @return activeTime
 */
int Teller::getActiveTime(){
	return activeTime;
}

/**
 * getter for idleTime
 * @return idleTime
 */
int Teller::getIdle(){
	return idleTime;
}

/**
 * Sets active time to the current global time + the time
 * of the current action the teller is doing
 * @param currentTime current global time
 * @param addTime time of the action of the teller
 * @return void
 */
void Teller::setActiveTime(int currentTime){
	activeTime = currentTime + idleTime;
}


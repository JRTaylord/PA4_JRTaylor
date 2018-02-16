/* PA4_the_murder - Jacob Tutlis - jjtutlis - James Taylor - jrtaylor
 * Customer.cpp
 *
 *  Created on: Feb 11, 2018
 *      Author: jjtutlis
 */

#include <cstdio>
#include <iostream>
#include <cstdlib>

#include "customer.h"
#include "event.h"


/** gets arrival time
 * @return arrTime arrival time
 */
float Customer::getArrTime() {
	return arrTime;
}

/** gets time of processing
 * @return proTime processing time
 */
float Customer::getProTime() {
	return proTime;
}

/** gets line number
 * @return line Line number
 */
int Customer::getLine(){
	return line;
}

/** Constructor for customer class generates random
 * arrival time and line number
 * @param simulationTime length of the simulation
 * @param tellers number of tellers
 */
Customer::Customer(float simulationTime, int tellers) {
	// generates random arrival time
	arrTime = simulationTime * rand() / float(RAND_MAX);
	proTime = -1;
	// generates random line number
	line = rand() % tellers;
}

/** default constructor for customer
 *
 */
Customer::Customer() {
	arrTime = -1;
	proTime = -1;
	line = 0;
}


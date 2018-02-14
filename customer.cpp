/*
 * Customer.cpp
 *
 *  Created on: Feb 11, 2018
 *      Author: jjtutlis
 */

#include <cstdio>
#include <iostream>

#include "Customer.h"


Customer::Customer(float simulationTime){
	// generates random arival
	arrTime = simulationTime * rand()/float(RAND_MAX);
	proTime = -1;
}

float Customer::getArrTime(){
	return arrTime;
}

float Customer::getProTime(){
	return proTime;
}

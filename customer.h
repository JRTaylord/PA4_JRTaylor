/*
 * customer.h
 *
 *  Created on: Feb 11, 2018
 *      Author: jjtutlis
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <cstdio>
#include <cstdlib>
#include "event.h"

class Customer: public event {
public:

	float getArrTime(); //gets arrival time
	float getProTime(); //gets processing time
	int getLine(); // gets line number
	// constructor
	Customer(float simulationTime, int tellers);

	Customer(); // basic constructor
	~Customer();// basic deconstructor

private:
	int line; // pre determined line
};

#endif /* CUSTOMER_H_ */

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

	float getArrTime();
	float getProTime();
	bool compare(event other);

	//event* test();

	Customer(float simulationTime){
		arrTime = simulationTime;
	}
	Customer();
	virtual ~Customer(){
		// destructor
	}
private:

};

#endif /* CUSTOMER_H_ */

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

class Customer {
public:
	float getArrTime();
	float getProTime();


	Customer(float simulationTime);
	Customer(){; // default constructor
		arrTime = -1;
		proTime = -1;
	}
	~Customer(); // destructor
private:
	float arrTime; // time of arrival
	float proTime; // time of being processed

};



#endif /* CUSTOMER_H_ */

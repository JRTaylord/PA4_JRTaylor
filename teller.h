/*
 * Teller.h
 *
 *  Created on: Feb 12, 2018
 *      Author: jjtutlis
 */

#ifndef TELLER_H_
#define TELLER_H_

#include <cstdio>
#include <cstdlib>
#include "event.h"

class Teller: public event {
public:

	float getArrTime();
	float getProTime();
	bool compare(event other);
	float idel; // idel time

	Teller(){
		idel = 1;
		time = 1;// default constructor
	}
	virtual ~Teller(){; // destructor
	}
private:

};

#endif /* TELLER_H_ */

/*
 * PA4_the_murder - Jacob Tutlis - jjtutlis - James Taylor - jrtaylor
 * Created on: Feb 12, 2018
 *      Author: jjtutlis
 */

#ifndef TELLER_H_
#define TELLER_H_

#include <cstdio>
#include <cstdlib>
#include "event.h"
//

const int IDLE_MAX = 160;

class Teller{
public:
	int getIdle(); //gets random time
	int getActiveTime(); // gets active time
	void setActiveTime(int currentTime); // sets active time
	Teller();
	virtual ~Teller(){; // destructor
	}


private:
	// random idle time between 0 - IDEL_MAX
	int idleTime;
	// time till teller is activated
	// takes current world time and adds length needed for processing
	int activeTime;
	bool isOpen; // true if teller is able to process

};

#endif /* TELLER_H_ */

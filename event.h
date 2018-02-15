//
// Created by student on 2/10/18.
//

#ifndef PA4_JRTAYLOR_EVENT_H
#define PA4_JRTAYLOR_EVENT_H

#include <cstdlib>

class event {
private:

public:
	float arrTime; // time of arrival
	float proTime; // time of being processed
	static int time;
	float getArrTime() {
		return arrTime;
	}
	float getProTime() {
		return proTime;
	}
	void setArrTime(float simulationTime) {
		arrTime = simulationTime;
	}

	event() {
		arrTime = -1;
		proTime = -1;
	}
	~event() {
	}

};

#endif //PA4_JRTAYLOR_EVENT_H

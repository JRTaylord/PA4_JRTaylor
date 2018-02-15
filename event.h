//
// Created by student on 2/10/18.
//

#ifndef PA4_JRTAYLOR_EVENT_H
#define PA4_JRTAYLOR_EVENT_H

#include <cstdlib>

class event {
public:
	int time;
	//event(int itime);
	virtual bool compare(event other){
		return NULL;
	}
	virtual event* test(){
		return NULL;
	}
	virtual float getArrTime(){
		return NULL;
	}
	virtual float getProTime(){
		return NULL;
	}

	float arrTime; // time of arrival
	float proTime; // time of being processed
	event(){
	}
	~event(){
	}
};

#endif //PA4_JRTAYLOR_EVENT_H

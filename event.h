//
// Created by student on 2/10/18.
//

#ifndef PA4_JRTAYLOR_EVENT_H
#define PA4_JRTAYLOR_EVENT_H

#include <cstdlib>

class event {
public:
	//int time;
	//event(int itime);
	bool compare(event other);
	virtual event* test(){
		return NULL;
	}

	event();
	~event();
};

#endif //PA4_JRTAYLOR_EVENT_H

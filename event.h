//
// Created by student on 2/10/18.
//

#ifndef PA4_JRTAYLOR_EVENT_H
#define PA4_JRTAYLOR_EVENT_H

#include <cstdlib>

class event {
	public:
		event *next;
		int arrTime; // time of arrival
		int proTime; // time of being processed
		int line;
		int getArrTime();
		int getLine();
		event();
		event(int simTime, int rand);
		~event();

};

#endif //PA4_JRTAYLOR_EVENT_H

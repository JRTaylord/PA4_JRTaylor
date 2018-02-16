//
// Created by student on 2/10/18.
//


#include "event.h"

/**
 * Blank constructor
 */
event::event(){
}

/**
 * Common constructor
 * @param simTime
 * @param tellers
 */
event::event(int simTime, int tellers){
    arrTime = rand()%simTime;
    line = rand()%tellers;
}

/**
 *
 * @return arrival time
 */
int event::getArrTime(){
    return arrTime;
}

/**
 *
 * @return what line the customer is in
 */
int event::getLine() {
    return line;
}

/**
 * destructor for an event
 */
event::~event() {}
// PA4_the_murder - Jacob Tutlis - jjtutlis - James Taylor - jrtaylor
// Created by student on 2/10/18.
//


#include "event.h"

/**
 * Blank constructor for
 */
event::event(){
}

/**
 * Normally used constructor
 * @param simTime the max time for the simulation to run
 * @param tellers the number of tellers, used to assign to a random line
 */
event::event(int simTime, int tellers){
    arrTime = rand()%simTime;
    line = rand()%tellers;
}

/**
 * @return arrival time
 */
int event::getArrTime(){
    return arrTime;
}

/**
 * @return what line the customer is in
 */
int event::getLine() {
    return line;
}

/**
 * destructor for an event
 */
event::~event() {}

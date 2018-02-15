/*
 * Customer.cpp
 *
 *  Created on: Feb 11, 2018
 *      Author: jjtutlis
 */

#include <cstdio>
#include <iostream>
#include <cstdlib>

#include "customer.h"
#include "event.h"


float Customer::getArrTime(){
	return arrTime;
}

float Customer::getProTime(){
	return proTime;
}

bool Customer::compare(event other){
    if (other.time<this->time){
        return true;
    } else{
        return false;
    }
}

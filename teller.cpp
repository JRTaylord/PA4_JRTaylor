/*
 * teller.cpp
 *
 *  Created on: Feb 12, 2018
 *      Author: jjtutlis
 */

#include <cstdio>
#include <iostream>

#include "teller.h"

float Teller::getArrTime(){
	return arrTime;
}

float Teller::getProTime(){
	return proTime;
}

bool Teller::compare(event other){
    if (other.time<this->time){
        return true;
    } else{
        return false;
    }
}



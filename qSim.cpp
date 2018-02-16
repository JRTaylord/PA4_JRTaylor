//
// Created by student on 2/10/18.
//
#include <iostream>
#include <cstdlib>
#include <queue>
#include "event.h"
#include "eventQueue.h"
#include "teller.h"
#include "customer.h"

using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));

	//interpreting command line arguments
	// total number of customers and tellers
	int customers, tellers;
	// time in unit of minutes
	int simulationTime, averageServiceTime;
	// random seed for program
	unsigned int seed;

	if (argc != 5 && argc != 6) {
		std::cout << "The command line arguments are invalid!\n";
		std::cout
				<< "./qSim #customers #tellers simulationTime averageServiceTime <seed>\n";
		return EXIT_FAILURE;
	}

	// Initializes command line arguments
	customers = atoi(argv[1]);
	tellers = atoi(argv[2]);
	simulationTime = atof(argv[3]);
	averageServiceTime = atof(argv[4]);

	switch (argc) {
	case 5:
		seed = rand();
		srand(seed);
		break;
	case 6:
		seed = atoi(argv[5]);
		srand(seed);
		break;
    }

    Teller allTellers[tellers];
    for (int i = 0; i < tellers; ++i) {
        //allTellers[i]=new Teller();
    }

    //*************************************************************************
    // Start of single line

    eventQueue *singleLineEQ = new eventQueue();


    for (int i = 0; i < customers; ++i) {
        singleLineEQ->priorityAdd(new event(simulationTime, tellers));
    }

    singleLineEQ->display();


    for(int time = 0; time < simulationTime; time++){
        // retrieves the first event if the time is less than or equal to the current time
        event *c=singleLineEQ->getFirst();
        if(c->getArrTime()<=time){
            // checks each teller to process new customers
            for (int i = 0; i < tellers; ++i) {
                // TODO: include method to check if the teller is available;
                singleLineEQ->delete_first();
                break;
            }
        }
    }



    //*************************************************************************
    // Start of multi line

    /*
    eventQueue *multiLineEQ;
    for(int time = 0; time < simulationTime; time+=.01){
        // checks each teller to process new customers
        for (int i = 0; i < tellers; ++i) {
            Customer cur;
            // retrieves the first event if the time is less than or equal to the current time
            multiLineEQ;
        }
    }*/

	return 0;
}

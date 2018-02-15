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
	float simulationTime, averageServiceTime;
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

	//*************************************************************************
	// Start of single line

	eventQueue *singleLineEQ = new eventQueue();
//
	Customer* allCustomers = new Customer();
	Teller* allTellers = new Teller();

	singleLineEQ->priorityAdd(allCustomers);
	singleLineEQ->priorityAdd(allTellers);
	singleLineEQ->priorityAdd(allCustomers);
		singleLineEQ->priorityAdd(allTellers);
	singleLineEQ->display();

	return 0;
}

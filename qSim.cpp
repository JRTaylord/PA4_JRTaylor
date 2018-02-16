//
// Created by student on 2/10/18.
//
#include <iostream>
#include <cstdlib>
#include <queue>
#include <cmath>
#include "event.h"
#include "eventQueue.h"
#include "teller.h"
#include "customer.h"

using namespace std;
using std::cout;
using std::endl;

/**
 * calculates the standard deviation of the customer service time dataset
 * credit to https://www.programiz.com/cpp-programming/examples/standard-deviation for this code
 * @param customerTimes
 * @param customersServed
 * @return the standard deviation
 */
float calculateSD(int customerTimes[], int customersServed) {
    float sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for(i = 0; i < customersServed; ++i)
    {
        sum += customerTimes[i];
    }

    mean = sum/10;

    for(i = 0; i < 10; ++i)
        standardDeviation += pow(customerTimes[i] - mean, 2);

    return sqrt(standardDeviation / 10);
}

/**
 * Prints the statistics from the test
 * @param customerTimes an array of integers representing the service times for customers
 * @param customersServed the number of customers served
 */
void printStatistics(int customerTimes[], int customersServed){
    double avgServiceTime;
    avgServiceTime = 0;
    for (int i = 0; i < customersServed; ++i) {
        avgServiceTime += customerTimes[i];
    }
    avgServiceTime = avgServiceTime / customersServed;
    cout << "Customers Served: " << customersServed << endl;
    cout << "Average Service Time: " << avgServiceTime << endl;
    cout << "Standard Deviation: " << calculateSD(customerTimes, customersServed) << endl;
}

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
		cout << "The command line arguments are invalid!\n";
		cout
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

    Teller *allTellers[tellers];
    for (int i = 0; i < tellers; ++i) {
        Teller *t = new Teller();
        allTellers[i] = t;
    }

    //*************************************************************************
    // Start of single line

    eventQueue *singleLineEQ = new eventQueue();


    for (int i = 0; i < customers; ++i) {
        singleLineEQ->priorityAdd(new event(simulationTime, tellers));
    }

    //singleLineEQ->display();

    // Statistical trackers
    int sLProcessingTimes[customers];
    int curCust=0;

    for(int time = 0; time < simulationTime; time++){
        // retrieves the first event if the time is less than or equal to the current time
        event *c=singleLineEQ->getFirst();
        if(c->getArrTime()<=time){
            // checks each teller to process new customers
            for (int i = 0; i < tellers; ++i) {
                if(allTellers[i]->getActiveTime() <= time){
                    event *e=singleLineEQ->getFirst();
                    if(e->getArrTime() <= time){
                        sLProcessingTimes[curCust] = (time - e->getArrTime());
                        curCust++;
                        singleLineEQ->delete_first();
                        allTellers[i]->setActiveTime(time);
                    }
                }
            }
        }
    }

    printStatistics(sLProcessingTimes, curCust);



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

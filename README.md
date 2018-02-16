PA4_the_murder – Jacob Tutlis – jjtutlis – James Taylor – jrtaylor
CS2303 – hw4 -  Event Driven Simulation 

Abstract:
The purpose of this program is to test the difference in efficiency between  two types of queues in a bank. The first is having one large line that feeds to the tellers and the second is having each teller have a individual line that the customer will pick based on how long each line is.

How to compile and run:
To compile type this in the command line while in the project directory.
> make

To clean the project enter
> make clean

To run the program you need to enter command line arguments in the format:
./qSim #customers #tellers simulationTime averageServiceTime <seed>

customers (int) is the number of customers, tellers(int) is the number of tellers,  simulationTime  (int)is the max duration of simulation,   averageServiceTime  (int) is the  desired average service time for each customer, and seed (int) is used to control the randomness of the program, the same seed will produce the same outcome, seed is an optional argument. If no seed is entered the program will generate a random seed. 

Here is examples of running the program
> ./qSim 100 4 60 2 3
> ./qSim 50 2 34 3

Program Structure:
This program consists of 4 main classes. The Teller and Customer classes store the required information for each respective class and also inherit the event class. The event class is important because it contains a variable holding the next event. This variable holding the next event allows for the EventQueue class to work, by making events a linked list.

Stats:
not done yet



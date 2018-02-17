CFLAGS = -g -Wall

all: qSim
# Set CFLAGS to allow Debug and issue all warnings.


qSim: qSim.o event.o eventQueue.o teller.o
	g++ $(CFLAGS) qSim.o event.o eventQueue.o teller.o -o qSim

qSim.o: qSim.cpp teller.h event.h eventQueue.h
	g++ $(CFLAGS) -c qSim.cpp

event.o: event.cpp event.h
	g++ $(CFLAGS) -c event.cpp

eventQueue.o: eventQueue.cpp eventQueue.h
	g++ $(CFLAGS) -c eventQueue.cpp

teller.o: teller.cpp event.h teller.h
	g++ $(CFLAGS) -c teller.cpp

clean:
	rm -f *.o 
	rm -f -r html latex
	
docs:
	doxygen
	# Following lines are only needed if we want to access doc pages
	#   using a Web server.
	#chmod go+r html/*
	#cp html/* ~/public_html/cs2303assig4
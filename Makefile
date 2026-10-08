CC=g++
FLAGS=-Wall
OBJETS = main.o CelluleListeTrajet.o ListeTrajet.o
EXECUTABLE = trajets.out

trajets: $(OBJETS)
	$(CC) $(FLAGS) -o $(EXECUTABLE) $^

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

CelluleListeTrajet.o: CelluleListeTrajet.cpp CelluleListeTrajet.h
	$(CC) $(FLAGS) -c $<

ListeTrajet.o: ListeTrajet.cpp ListeTrajet.h
	$(CC) $(FLAGS) -c $<

clean:
	rm *.o *~ *.out
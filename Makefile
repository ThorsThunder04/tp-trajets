CC=g++
FLAGS=-Wall
OBJETS = CelluleListeTrajet.o ListeTrajet.o TrajetSimple.o Trajet.o
EXECUTABLE = trajets.out

trajets: main.o $(OBJETS)
	$(CC) $(FLAGS) -o $(EXECUTABLE) $^

testing: testing.o $(OBJETS)
	$(CC) $(FLAGS) -o testing.out $^

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

testing.o: testing.cpp
	$(CC) $(FLAGS) -c $<

CelluleListeTrajet.o: CelluleListeTrajet.cpp CelluleListeTrajet.h
	$(CC) $(FLAGS) -c $<

ListeTrajet.o: ListeTrajet.cpp ListeTrajet.h
	$(CC) $(FLAGS) -c $<

TrajetSimple.o: TrajetSimple.cpp TrajetSimple.h
	$(CC) $(FLAGS) -c $<

Trajet.o: Trajet.cpp Trajet.h
	$(CC) $(FLAGS) -c $<

clean:
	rm *.o *~ *.out
CC=g++
FLAGS=-Wall
OBJETS = CelluleListeTrajet.o ListeTrajet.o Catalogue.o Interface.o TrajetCompose.o TrajetSimple.o Trajet.o
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

Catalogue.o: Catalogue.cpp Catalogue.h Trajet.h ListeTrajet.h
	$(CC) $(FLAGS) -c $<

Interface.o: Interface.cpp Interface.h Catalogue.h ListeTrajet.h TrajetSimple.h Trajet.h
	$(CC) $(FLAGS) -c $<

TrajetCompose.o: TrajetCompose.cpp TrajetCompose.h CelluleListeTrajet.h Trajet.h ListeTrajet.h
	$(CC) $(FLAGS) -c $<

clean:
	rm *.o *~ *.out
CC=g++
FLAGS=-Wall
OBJETS = main.o CelluleListeTrajet.o ListeTrajet.o Catalogue.o Interface.o TrajetCompose.o
EXECUTABLE = trajets.out

trajets: $(OBJETS)
	$(CC) $(FLAGS) -o $(EXECUTABLE) $^

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

CelluleListeTrajet.o: CelluleListeTrajet.cpp CelluleListeTrajet.h
	$(CC) $(FLAGS) -c $<

ListeTrajet.o: ListeTrajet.cpp ListeTrajet.h
	$(CC) $(FLAGS) -c $<

Catalogue.o: Catalogue.cpp Catalogue.h Trajet.h ListeTrajet.h
	$(CC) $(FLAGS) -c $<

Interface.o: Interface.cpp Interface.h Catalogue.h ListeTrajet.h TrajetSimple.h Trajet.h
	$(CC) $(FLAGS) -c $<

TrajetCompose.o: TrajetCompose.cpp TrajetCompose.h CelluleListeTrajet.h Trajet.h ListeTrajet.h
	$(CC) $(FLAGS) -c $<

clean:
	rm *.o *~ *.out
CC=g++
FLAGS=-Wall -ansi -pedantic -Wall -std=c++11
OBJETS = trajets.o

trajets: $(OBJETS)
	$(CC) $(FLAGS) -o trajets $(OBJETS)


CC = g++
CFLAGS = -g
PROG = jeu

$(PROG): carte.o paquet.o $(PROG).o
	$(CC) carte.o paquet.o $(PROG).o -o $(PROG)

$(PROG).o: $(PROG).cpp
	$(CC) -c $(CFLAGS) $(PROG).cpp -o $(PROG).o

carte.o: carte.cpp carte.h
	$(CC) -c $(CFLAGS) carte.cpp -o carte.o

paquet.o: paquet.cpp paquet.h
	$(CC) -c $(CFLAGS) paquet.cpp -o carte.o

clean:
	rm *o

cleanall: clean
	rm $(PROG)
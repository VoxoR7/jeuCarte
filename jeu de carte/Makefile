CC = g++
CFLAGS = -g
PROG = jeu

remake: cleanall all

all: $(PROG)

$(PROG): carte.o paquet.o $(PROG).o
	$(CC) carte.o paquet.o $(PROG).o -o $(PROG)

$(PROG).o: $(PROG).cpp
	$(CC) -c $(CFLAGS) $(PROG).cpp -o $(PROG).o

carte.o: carte.cpp carte.h
	$(CC) -c $(CFLAGS) carte.cpp -o carte.o

paquet.o: paquet.cpp paquet.h
	$(CC) -c $(CFLAGS) paquet.cpp -o paquet.o

clean:
	rm -f *o

cleanall: clean
	rm -f $(PROG)
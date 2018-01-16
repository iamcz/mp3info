CC = g++
CFLAGS = -O

mp3info: main.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $^

test: mp3info opening.mp3
	./mp3info opening.mp3

clean: main.o mp3info
	rm $^

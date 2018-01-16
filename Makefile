CC = g++
CFLAGS = -O

mp3info: main.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $^

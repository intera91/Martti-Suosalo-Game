all: Source.o
	g++ -o Source Source.o

Source.o: Source.cpp
	g++ -Wall -Wextra -g3 -c -o Source.o Source.cpp

clean:
	rm -f Source Source.o

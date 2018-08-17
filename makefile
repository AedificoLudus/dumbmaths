CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=math.cpp Point.cpp zPoint.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=math

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o core

CC=g++
CFLAGS= -c -Wall
math: math.cpp Point.cpp zPoint.cpp

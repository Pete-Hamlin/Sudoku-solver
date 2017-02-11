CC=g++
CFLAGS=-c -Wall
LDFLAGS=

SRC=main.cpp dancing_links.cpp
OBJ=$(SRC:.cpp=.o)
TARGET=solve

RM=rm -f

all: $(SRC) $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(TARGET) $(OBJ)

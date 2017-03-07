CC=g++
CFLAGS=-c -Wall -g
LDFLAGS= -g
VPATH=src:
BINDIR=bin

SRC= main.cpp functions.cpp dancing_links.cpp lists.cpp
OBJ=$(SRC:.cpp=.o)
TARGET=$(BINDIR)/solve

RM=rm -f

all: $(SRC) $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(TARGET) $(OBJ)

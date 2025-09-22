CC = gcc
CFLAGS = -I../include
SRC = main.c mystrfunctions.c myfilefunctions.c
TARGET = ../bin/client

all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p ../bin
	$(CC) $(SRC) $(CFLAGS) -o $(TARGET)

clean:
	rm -f $(TARGET)


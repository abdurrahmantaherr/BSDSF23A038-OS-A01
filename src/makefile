CC = gcc
CFLAGS = -I../include -fPIC
LIB = ../lib/libmyutils.so
TARGET = ../bin/client_dynamic

all: $(TARGET)

$(TARGET): main.o $(LIB)
	mkdir -p ../bin
	$(CC) main.o -L../lib -lmyutils -o $(TARGET)

$(LIB): mystrfunctions.o myfilefunctions.o
	mkdir -p ../lib
	$(CC) -shared -o $(LIB) mystrfunctions.o myfilefunctions.o

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) *.o $(LIB)


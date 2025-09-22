CC = gcc
CFLAGS = -I../include
STATIC_TARGET = ../bin/client_static
LIB = ../lib/libmyutils.a

all: $(STATIC_TARGET)

$(STATIC_TARGET): main.o $(LIB)
	mkdir -p ../bin
	$(CC) $(CFLAGS) main.o -L../lib -lmyutils -o $@

$(LIB): mystrfunctions.o myfilefunctions.o
	mkdir -p ../lib
	ar rcs $(LIB) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(STATIC_TARGET) *.o $(LIB)


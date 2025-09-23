CC = gcc
CFLAGS = -I../include
TARGET = ../bin/client_static
LIB = ../lib/libmyutils.a
MANPAGE = ../man/man3/myutils.3

all: $(TARGET)

$(TARGET): main.o $(LIB)
	mkdir -p ../bin
	$(CC) $(CFLAGS) main.o -L../lib -lmyutils -o $(TARGET)

$(LIB): mystrfunctions.o myfilefunctions.o
	mkdir -p ../lib
	ar rcs $(LIB) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

install: $(TARGET) $(MANPAGE)
	install -d /usr/local/bin
	install -d /usr/local/share/man/man3
	install -m 755 $(TARGET) /usr/local/bin/client
	install -m 644 $(MANPAGE) /usr/local/share/man/man3/myutils.3
	gzip -f /usr/local/share/man/man3/myutils.3

clean:
	rm -f $(TARGET) *.o $(LIB)


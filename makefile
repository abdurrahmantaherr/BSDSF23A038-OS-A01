.PHONY: all clean static

all:
	$(MAKE) -C src

# Build static version from src/Makefile
static:
	$(MAKE) -C src static

clean:
	$(MAKE) -C src clean


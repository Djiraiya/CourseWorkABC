CFLAGS = -Wall -Werror

.PHONY: clean all

all : bin/ABC

bin/ABC : build/main.o build/functions.o
	gcc build/main.o build/functions.o -o bin/ABC $(CFLAGS)

build/main.o : src/main.c src/functions.h
	gcc -c src/main.c -o build/main.o $(CFLAGS)

build/functions.o : src/functions.c src/functions.h
	gcc -c src/functions.c -o build/functions.o $(CFLAGS)

clean : 
	rm -rf build/*.o
	rm -rf bin/ABC
	@echo "All files have been cleaned."

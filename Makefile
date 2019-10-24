OBJECTS = main.o funcs.o

main: $(OBJECTS)
	g++ -o main $(OBJECTS)

tests: tests.o funcs.0 
	g++ -o tests tests.o funcs.o 

main.o: main.cpp funcs.h
	g++ -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

tests.o: tests.cpp funcs.h
	g++ -c tests.cpp

clean:
	rm $(OBJECTS) tests.o
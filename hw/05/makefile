CPP := g++
OBJS := functions.o

all: hw03

hw03: hw04.hpp functions.hpp matrixDef.hpp $(OBJS)
	$(CPP) $(OBJS) hw04.cpp -o hw04

functions.cpp:	hw04.hpp functions.hpp matrixDef.hpp
	$(CPP) -c functions.cpp -o functions.o

clean:
	rm *.o *.tar

tar:
	tar cfv hw04.tar hw04.cpp functions.cpp functions.hpp hw04.hpp matrixDef.hpp makefile hw04.scr

CPP := g++
OBJS := hw09f.o

all: hw09

hw09: hw09.hpp $(OBJS)
	$(CPP) $(OBJS) hw09.cpp -o hw09

hw09f.cpp:	hw09f.hpp hw09.hpp
	$(CPP) -c hw09f.cpp -o hw09f.o

clean:
	rm *.o *.tar

tar:
	tar -cvf hw09.tar hw09.cpp hw09f.cpp hw09f.hpp hw09.hpp makefile hw09.scr



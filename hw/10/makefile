CPP := clang++ 
OBJS := face.o both.o suit.o menu.o 

all: hw10

hw09: hw10.hpp $(OBJS)
	$(CPP) $(OBJS) hw10.cpp -o hw10

face: hw10.hpp
	$(CPP) -c face.cpp -o face.o 

suit: hw10.hpp
	$(CPP) -c suit.cpp -o suit.o 

both: face.cpp suit.cpp hw10.hpp
	$(CPP) -c both.cpp -o both.o 

menu: both.cpp face.cpp suit.cpp hw10.hpp
	$(CPP) -c menu.cpp -o menu.o

tar:
	rm *.o *.tar

tar:
	tar -cvf hw10.tar menu.cpp hw10.cpp hw10.hpp face.cpp both.cpp suit.cpp makefile hw10.scr

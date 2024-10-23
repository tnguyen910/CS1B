CPP := g++
OBJS := hw05f1.o hw05f2.o hw05f3.o hw05f4.o hw05f5.o hw05f6.o hw05f7.o hw05f.hpp

all: hw05

hw05:	hw05f1 hw05f2 hw05f3 hw05f4 hw05f5 hw05f5 hw05f6 hw05f7
	$(CPP) $(OBJS) hw05.cpp -o hw05

hw05f1:	
	$(CPP) -c hw05f1.cpp -o hw05f1.o

hw05f2:
	$(CPP) -c hw05f2.cpp -o hw05f2.o

hw05f3:
	$(CPP) -c hw05f3.cpp -o hw05f3.o

hw05f4:
	$(CPP) -c hw05f4.cpp -o hw05f4.o

hw05f5:
	$(CPP) -c hw05f5.cpp -o hw05f5.o 

hw05f6:
	$(CPP) -c hw05f6.cpp -o hw05f6.o

hw05f7:
	$(CPP) -c hw05f7.cpp -o hw05f7.o

clean:
	rm *.o *.tar

tar:
	tar cfv hw05.tar hw05.cpp hw05.hpp hw05f.hpp hw05f1.cpp hw05f2.cpp hw05f3.cpp hw05f4.cpp hw05f5.cpp hw05f6.cpp hw05f7.cpp makefile hw05.scr

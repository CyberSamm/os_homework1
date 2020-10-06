all: fin
fin: main.o ComplexNum.o
	g++ main.o ComplexNum.o -o fin
main.o: main.cpp
	g++ -c main.cpp
ComplexNum.o: ComplexNum.cpp
	g++ -c ComplexNum.cpp
clean:
	rm -rf *o fin

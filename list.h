#include<iostream>

using namespace std;

#ifndef __RESIZABLE_ARRAY__
#define __RESIZABLE_ARRAY__
 
#define MAX_SIZE 100 // o dimensiune maxima prestabilita
 
struct ResizableArray {
	int *array;
	int size; //se va modifica la fiecare remove/add de element!
 
	// Metoda de initializare
	ResizableArray(int size = 0) {
		this->size = size;
		this->array = new int[ size ];
	}

	// Metoda care afiseaza elementele vectorului.
	void print() {
		std::cout << "Continut: ";
		for ( int i = 0; i < size; ++i ) {
			std::cout << array[i] << ' ';
		}
		std::cout << '\n';
	}
};
 
#endif // __RESIZABLE_ARRAY__

#include<iostream>

using namespace std;

#ifndef __RESIZABLE_ARRAY__
#define __RESIZABLE_ARRAY__
 
#define MAX_SIZE 100 // o dimensiune maxima prestabilita
 
struct ResizableArray {
	int *array;
	int capacity;
	int size;
 
	// Metoda de initializare
	// Modificam sa realoce doar cu 1 la fiecare
	ResizableArray(int capacity) {
		this->capacity = capacity;
		this->size = 0;
		this->array = new int[ capacity ];
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

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
	
	// Metoda de eliminare a unui element la index dat
	void remove(int index) {
		int i;
		for(i = index; i < size-1; i++)
			array[i] = array[i+1];
			
		int *tmpArray = new int[size-1];
		for(i = 0; i < size-1; i++)
			tmpArray[i] = array[i];
		
		delete[] array;
		
		array = tmpArray;
		size = size-1;
		
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

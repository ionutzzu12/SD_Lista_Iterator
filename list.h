#include<iostream>

using namespace std;

#ifndef __RESIZABLE_ARRAY__
#define __RESIZABLE_ARRAY__


template<typename T>
struct ResizableArray {
	T *array;
	int size; //se va modifica la fiecare remove/add de element!

	// Metoda de initializare
	ResizableArray() {
		this->size = 0;
		this->array = new T[ 0 ];
	}

	// Adauga elem pe pozitia index
	void insert (T element, int index){
		T *tmpArray = new T[size+1];
		int i;

		for(i =0; i < index; i++)
			tmpArray[i] = array[i];
		tmpArray[index]= element;
		for(i = index + 1; i< size + 1; i++)
			tmpArray[i] = array[i-1];

		delete [] array;
		array = tmpArray;
		size = size + 1;
	}

	// Metoda de eliminare a unui element la index dat
	void remove(int index) {
		int i;
		for(i = index; i < size-1; i++)
			array[i] = array[i+1];

		T *tmpArray = new T[size-1];
		for(i = 0; i < size-1; i++)
			tmpArray[i] = array[i];

		delete[] array;

		array = tmpArray;
		size = size-1;

	}

	// Metoda care afiseaza elementele vectorului.
	void print() {
		std::cout << "Continut: ";
		for ( int i = 0; i < size; i++ ) {
			std::cout << array[i] << ' ';
		}
		std::cout << '\n';
	}
};

#endif // __RESIZABLE_ARRAY__

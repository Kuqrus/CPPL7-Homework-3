#include "smart_array.h"

smart_array::smart_array(int size_) {
	size = size_;
	arr = new int[size];
}

void smart_array::add_element(int el) {
	if (counter >= size) {
		throw std::exception{ "Cannot add more elements!" };
	}
	arr[counter++] = el;
}

int smart_array::get_element(int el) {
	if (el >= size) {
		throw std::exception{ "Wrong index!" };
	}
	return arr[el];
}

smart_array smart_array:: operator=(smart_array& left) {
	if (size == counter) {
		throw std::exception{ "Array is full!" };
	}
	else if (counter + left.counter > size) {
		throw std::exception{ "Array is not big enough!" };
	}
	int rightIndex = counter;
	for (int i = 0; i < size - counter; i++) {
		arr[rightIndex++] = left.arr[i];
	}
	counter = rightIndex;
	return *arr;
}

smart_array::~smart_array() {
	delete[] arr;
}
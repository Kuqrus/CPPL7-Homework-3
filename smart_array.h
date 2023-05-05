#pragma once
#include <iostream>

class smart_array {

private:
	int counter = 0;
	int* arr;
	int size = 0;

public:
	smart_array(int size_);

	void add_element(int el);
	int get_element(int el);

	smart_array operator=(smart_array& left);

	~smart_array();
};
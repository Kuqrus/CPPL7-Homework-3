#include "tasks.h"

void task_3_1() {
	try {
		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		std::cout << arr.get_element(1) << std::endl;
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
}

void task_3_2() {
	try
	{
		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);

		smart_array arr_copy(arr);

		smart_array new_array(2);
		new_array.add_element(44);
		new_array.add_element(34);

		arr = new_array;
		arr.get_info();
		arr_copy.get_info();
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
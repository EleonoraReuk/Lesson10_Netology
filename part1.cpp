#include <iostream>


int main()
{	
	int array_size{};
	std::cout << "Введите размер массива: ";
	std::cin >> array_size;
	int* int_array = new int[array_size] {};
	for (int i = 0; i < array_size; ++i)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> int_array[i];
	}
	std::cout << "Введенный массив: ";
	for (int i = 0; i < array_size; ++i)
	{
		std::cout << int_array[i] << " ";
	}

	delete[] int_array;

	return EXIT_SUCCESS;
}



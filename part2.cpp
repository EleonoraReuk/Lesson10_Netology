#include <iostream>

double* create_array(int& array_size);

int main()
{
    int array_size{};
	double* int_array = create_array(array_size);
	
	std::cout << "Массив: ";
	for (int i = 0; i < array_size; ++i)
	{
		std::cout << int_array[i] << " ";
	}
	
    delete[] int_array;
	return EXIT_SUCCESS;
}

double* create_array(int& array_size)
{
	std::cout << "Введите размер массива: ";
	std::cin >> array_size;
	double* int_array = new double[array_size] {};
	return int_array;
}

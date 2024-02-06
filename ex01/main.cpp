#include "iter.hpp"

int main()
{
	int arr[5];

	std::cout << "Initial array:" << std::endl;
	for (int i = 0; i < 5; ++i) {
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}


	try {
		::iter(arr, 5, ::multiply);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception thrown" << std::endl;
		return 0;
	}

	std::cout << "\nAfter iter:" << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << arr[i] << std::endl;
	}

	char arr2[] = "42";

	std::cout << "\n\nInitial array:" << std::endl;
	std::cout << arr2 << std::endl;
	try
	{
		iter(arr2, 2, ::increment);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception thrown" << std::endl;
		return 0;
	}
	std::cout << "\nAfter iter:" << std::endl;
	std::cout << arr2 << std::endl;
}
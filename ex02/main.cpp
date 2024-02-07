
#include "Array.hpp"

int main()
{
	Array<int> nbArray(8);
	Array<int> Arr2(nbArray);

	std::cout << "array 1 size: " << nbArray.size() << std::endl;
	std::cout << "array 2 size: " << Arr2.size() << std::endl;

	try
	{
		std::cout << &nbArray[7] << std::endl;
		std::cout << &Arr2[7] << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "out of bounds exception" << std::endl;
	}

	Array<void*> *varr = new Array<void *>(10);
	Array<void*> *varr2 = new Array<void *>();
	*varr2 = *varr;

	std::cout << "array 3 size: " << varr->size() << std::endl;
	std::cout << "array 4 size: " << varr2->size() << std::endl;

	try
	{
		std::cout << &varr[2] << std::endl;
		std::cout << &varr2[2] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "out of bounds exception" << std::endl;
	}

	delete varr;
	delete varr2;

}
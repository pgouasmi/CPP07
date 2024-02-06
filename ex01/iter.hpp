//
// Created by pgoua on 06/02/2024.
//

#ifndef ITER_HPP
#define ITER_HPP

#include <exception>
#include <iostream>

template <typename T>
T multiply(T value)
{
	return value*=100;
}

template <typename T>
T increment(T value)
{
	return ++value;
}

template <typename T>
void iter(T *array, int length, T (*func)(T))
{
	if (!array || length < 0 || !func)
		throw std::exception();
	for (int i = 0; i < length; ++i) {
		array[i] = func(array[i]);
//		std::cout << array[i] << std::endl;
	}
}

#endif

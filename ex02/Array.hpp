//
// Created by pgoua on 06/02/2024.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
public:
	Array();
	Array(unsigned int n);
	Array(const Array &obj);
	Array &operator=(const Array &obj);
	~Array();

	T &operator[](size_t i);
	unsigned int size();

private:
	T *_array;
	unsigned int _size;

};

template <typename T>
Array<T>::Array() : _array(), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size (n)
{
	this->_array = new T[n];

	for (unsigned int i = 0; i < n; ++i) {
		_array[i] = T();
	}
}

template <typename T>
Array<T>::~Array()
{
	delete []_array;
}


template <typename T>
Array<T>::Array(const Array &obj)
{
	*this = obj;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj) {

	this->_size = obj._size;

	this->_array = new T[_size];
	for (unsigned int i = 0; i < _size; ++i) {
		this->_array[i] = obj._array[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](size_t i)
{
	if (i > this->_size)
		throw std::exception();
	else
		return (this->_array[i]);
}

template <typename T>
unsigned int Array<T>::size()
{
	return _size;
}



#endif

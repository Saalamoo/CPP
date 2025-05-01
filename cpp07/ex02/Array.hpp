#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array
{
private:
	T *arr;
	unsigned int sz;
public:
	Array() : arr(new T[0]), sz(0) {}
	Array(unsigned int n) : arr(new T[n]), sz(n) {}
	Array(const Array& array)
	{
		if (this != &array)
		{
			this->arr = new T[array.sz];
			for (unsigned int i = 0; i < array.sz; ++i)
				this->arr[i] = array.arr[i];
			this->sz = array.sz;
		}
	}
	Array& operator=(const Array& array)
	{
		if (this != &array)
		{
			delete [] this->arr;
			this->arr = new T[array.sz];
			for (unsigned int i = 0; i < array.sz; ++i)
				this->arr[i] = array.arr[i];
			this->sz = array.sz;
		}
		return (*this);
	}
	~Array()
	{
		delete [] arr;
	}
	class OutOfBoundException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Value is out of bound.");
			}
	};
	T& operator[] (int index)
	{
		if (index >= (int)this->sz || index < 0)
			throw Array::OutOfBoundException();
		return (this->arr[index]);
	}
	const T& operator[] (int index) const
	{
		if (index >= (int)this->sz || index < 0)
			throw Array::OutOfBoundException();
		return (this->arr[index]);
	}
	unsigned int size() const
	{
		return (this->sz);
	}
};

#endif
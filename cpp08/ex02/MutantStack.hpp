#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() {};
	MutantStack(const MutantStack &toCopy) : std::stack<T>(toCopy) {};
    MutantStack	&operator = (const MutantStack &toCopy) { std::stack<T>::operator=(toCopy); return (*this); };
	~MutantStack() {};
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
};

#endif
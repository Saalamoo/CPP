#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

class Span
{
private:
	std::vector<int> vec;
	unsigned int N;
public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(const Span &span);
	Span& operator=(const Span& span);
	void addNumber(int num);
	void addMultiple(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	class MaxElementsReached : public std::exception
	{
	private:
		std::string _msg;
	public:
		MaxElementsReached(const std::string& msg);
		~MaxElementsReached() throw();
		const char* what() const throw();
	};
	class NoSpanFound : public std::exception
	{
	private:
		std::string _msg;
	public:
		NoSpanFound(const std::string& msg);
		~NoSpanFound() throw();
		const char* what() const throw();
	};
};

#endif
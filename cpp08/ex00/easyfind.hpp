#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class OccurranceNotFound : public std::exception
{
	public:
		virtual const char * what () const throw () 
        {
			return("Couldn't find occurance in container");
        }
};

template <typename T>
typename T::iterator easyfind(T cont, int occ)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), occ);
	if (it == cont.end())
        throw OccurranceNotFound();
	return (it);
}

#endif
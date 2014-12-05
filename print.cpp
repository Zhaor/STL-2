#include <iostream>

template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optcstr="")
{
	typename T::const_iterator pos;
	
	std::cout << optcstr;
	for(pos=coll.begin(); pos!=coll.end(); ++pos)
	{
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

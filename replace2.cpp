#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include "print.cpp"
using namespace std;

int main()
{
	list<int> coll;
	
	for(int i=2; i<=6; ++i)
	{
		coll.push_back(i);
	}
	for(int i=4; i<=9; ++i)
	{
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll);
	
	replace_copy(coll.begin(), coll.end(),
			ostream_iterator<int>(cout, " "), 
			5, 55);
	PRINT_ELEMENTS(coll);
	cout << endl;

	replace_copy_if(coll.begin(), coll.end(),
			ostream_iterator<int>(cout, " "), 
			bind2nd(modulus<int>(), 2), 0);
	cout << endl;
	
	return 0;
}

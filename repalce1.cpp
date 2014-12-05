#include <iostream>
#include <list>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	list<int> coll;
	
	for(int i=2; i<=7; ++i)
	{
		coll.push_back(i);
	}
	for(int i=4; i<=9; ++i)
	{
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll, "coll: ");

	replace(coll.begin(), coll.end(), 6, 42);
	PRINT_ELEMENTS(coll, "coll: ");
	
	replace_if(coll.begin(), coll.end(), bind2nd(less<int>(), 5), 0);
	PRINT_ELEMENTS(coll, "coll: ");
	
	return 0;	
}

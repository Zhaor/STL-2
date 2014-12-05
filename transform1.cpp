#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include "print.cpp"
using namespace std;

int square(int value)
{
	return value*value;
}

int main()
{
	std::set<int> coll1;
	std::vector<int> coll2;

	for(int i=1; i<=9; ++i)
	{
		coll1.insert(i);
	}
	PRINT_ELEMENTS(coll1, "initialized:");
	
	std::transform(coll1.begin(), coll1.end(), 
			std::back_inserter(coll2), 
			square);
	PRINT_ELEMENTS(coll2, "squared:");
	return 0;
}

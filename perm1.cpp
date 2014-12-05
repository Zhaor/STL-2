#include <iostream>
#include <vector>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	vector<int> coll;
	
	for(int i=1; i<=3; ++i)
		coll.push_back(i);
	PRINT_ELEMENTS(coll, "on enter: ");
	
	while(next_permutation(coll.begin(), coll.end()))
	{
		PRINT_ELEMENTS(coll, " ");
	}
	PRINT_ELEMENTS(coll, "afterawrd: ");

	while(prev_permutation(coll.begin(), coll.end()))
	{
		PRINT_ELEMENTS(coll, " ");
	}
	PRINT_ELEMENTS(coll, "now: ");

	while(prev_permutation(coll.begin(), coll.end()))
	{
		PRINT_ELEMENTS(coll, " ");
	}
	PRINT_ELEMENTS(coll, "afterward: ");

	return 0;
}

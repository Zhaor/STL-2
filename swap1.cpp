#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	deque<int> coll;
	
	for(int i=1; i<=9; ++i)	
	{
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll);
	
	//swap first and second value
	iter_swap(coll.begin(), ++coll.begin());
	PRINT_ELEMENTS(coll);

	//swap first and last value
	iter_swap(coll.begin(), --coll.end());
	PRINT_ELEMENTS(coll);
}

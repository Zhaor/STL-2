#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>
#include "print.cpp"
using namespace std;

int main()
{
	vector<int> coll1;
	deque<int> coll2;
	
	for(int i=1; i<=9; ++i)
	{
		coll1.push_back(i);
	}
	for(int i=11; i<=23; ++i)
	{
		coll2.push_back(i);
	}
	PRINT_ELEMENTS(coll1);
	PRINT_ELEMENTS(coll2);

	deque<int>::iterator pos;
	pos = swap_ranges(coll1.begin(), coll1.end(), coll2.begin());

	PRINT_ELEMENTS(coll1);
	PRINT_ELEMENTS(coll2);
	
	if(pos != coll2.end())
	{
		cout << "first element not modified: " << *pos << endl;
	}	
	swap_ranges(coll2.begin(), coll2.begin()+3, coll2.rbegin());
	PRINT_ELEMENTS(coll2);

	return 0;	
}

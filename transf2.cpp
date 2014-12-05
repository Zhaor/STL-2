#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include "print.cpp"
using namespace std;

int main()
{
	vector<int> coll1;
	list<int> coll2;

	for(int i=1; i<=9; ++i)
	{
		coll1.push_back(i);
	}
	PRINT_ELEMENTS(coll1, "coll1: ");
	
	transform(coll1.begin(), coll1.end(), 
			coll1.begin(),
			coll1.begin(),
			multiplies<int>());
	PRINT_ELEMENTS(coll1, "squared: ");
	
	transform(coll1.begin(), coll1.end(), coll1.rbegin(),
		back_inserter(coll2), plus<int>());
	PRINT_ELEMENTS(coll2, "coll2: ");
	
	transform(coll1.begin(), coll1.end(), coll2.begin(),
		ostream_iterator<int>(cout, " "),
		minus<int>());
	cout << endl;

	return 0;
}

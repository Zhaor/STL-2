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
	
	for(int i=1; i<=9;++i)
	{
		coll1.push_back(i);
	}
	PRINT_ELEMENTS(coll1, "coll1:");
	
	copy(coll1.begin(), coll1.end(), back_inserter(coll2));
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	copy(coll1.rbegin(), coll1.rend(), coll2.begin());
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}

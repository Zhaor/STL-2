#include <iostream>
#include <list>
#include <iterator>
#include <set>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	list<int> coll1;
	
	for(int i=1; i<=6; ++i)
		coll1.push_back(i);
	for(int i=1; i<=9; ++i)
		coll1.push_back(i);
	PRINT_ELEMENTS(coll1);

	remove_copy(coll1.begin(), coll1.end(),
			ostream_iterator<int>(cout, " "), 3);
	cout << endl;

	remove_copy_if(coll1.begin(), coll1.end(),
			ostream_iterator<int>(cout, " "),
			bind2nd(greater<int>(),4));
	cout << endl;

	multiset<int> coll2;
	remove_copy_if(coll1.begin(), coll1.end(),
			inserter(coll2, coll2.end()),
			bind2nd(less<int>(),4));
	PRINT_ELEMENTS(coll2);
	cout << endl;

	return 0;
}

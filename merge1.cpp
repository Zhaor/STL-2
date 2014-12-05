#include <iostream>
#include <list>
#include <set>
#include <algorithm>
#include <iterator>
#include "print.cpp"
using namespace std;

int main()
{
	list<int> coll1;
	set<int> coll2;
	
	for(int i=1; i<=6; ++i)
		coll1.push_back(i);
	for(int i=3; i<=8; ++i)
		coll2.insert(i);
	PRINT_ELEMENTS(coll1, "coll1: ");	
	PRINT_ELEMENTS(coll2, "coll2: ");
	
	cout << "merge: ";
	merge(coll1.begin(), coll1.end(), 
		coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}

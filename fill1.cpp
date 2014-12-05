#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include "print.cpp"
using namespace std;

int main()
{
	fill_n(ostream_iterator<float>(cout, " "), 10, 7.7);
	cout << endl;

	list<string> coll1;
	fill_n(back_inserter(coll1), 9,"hello");
	cout << endl;
	PRINT_ELEMENTS(coll1, "coll1`: ");
	
	fill_n(coll1.begin(), coll1.size()-2, "hi");
	PRINT_ELEMENTS(coll1, "coll1: ");
	
	list<string>::iterator pos1, pos2;
	pos1 = coll1.begin();
	pos2 = coll1.end();
	fill(++pos1, --pos2, "hmmm");
	PRINT_ELEMENTS(coll1, "coll1: ");


	return 0;
}

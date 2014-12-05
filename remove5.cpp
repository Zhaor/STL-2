#include <iostream>
#include <vector>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	vector<int> coll;
	
	for(int i=2; i<=6; ++i)
		coll.push_back(i);
	for(int i=4; i<=9; ++i)
		coll.push_back(i);
	for(int i=1; i<=7; ++i)
		coll.push_back(i);

	vector<int>::iterator pos;
	pos = remove(coll.begin(), coll.end(), 5);
	PRINT_ELEMENTS(coll, "size not changed: ");

	coll.erase(pos, coll.end());
	PRINT_ELEMENTS(coll, "size changed: ");

	coll.erase(remove_if(coll.begin(), coll.end(), bind2nd(less<int>(),4)),
			coll.end());

	PRINT_ELEMENTS(coll, "<4 removed: ");

	return 0;
}





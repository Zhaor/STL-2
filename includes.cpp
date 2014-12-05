#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	list<int> coll;
	vector<int> search;

	for(int i=1; i<=9; ++i)
		coll.push_back(i);
	PRINT_ELEMENTS(coll, "coll: ");
	
	search.push_back(3);
	search.push_back(4);
	search.push_back(7);
	PRINT_ELEMENTS(search, "search: ");

	if(includes(coll.begin(), coll.end(),search.begin(), search.end()))
	{
		cout << "all elements fo search are also in coll" << endl;
	}
	else
	{
		cout << "all elements fo search are also in coll" << endl;
	}

	return 0;
}


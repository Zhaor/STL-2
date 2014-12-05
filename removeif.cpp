#include <iostream>
#include <list>
#include <algorithm>
#include "print.cpp"
using namespace std;

class Nth
{
public:
	Nth(int n):nth(n), count(0){}
	bool operator() (int)
	{
		return ++count == nth;
	}
private:
	int nth;
	int count;
};

int main()
{
	list<int> coll;
	for(int i=1; i<=9; ++i)
	{
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll, "coll:");
	
	list<int>::iterator pos;
	pos = remove_if(coll.begin(), coll.end(), Nth(3));
	coll.erase(pos, coll.end());
	
	PRINT_ELEMENTS(coll, "nth removed: ");

	return 0;
}

#include <iostream>
#include <deque>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	deque<int> coll;
	for(int i=1; i<=9; ++i)
		coll.push_back(i);
	PRINT_ELEMENTS(coll, "on entry: ");
	
	sort(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "sorted: ");
	
	sort(coll.begin(), coll.end(), greater<int>());
	PRINT_ELEMENTS(coll, "sorted>:");

	return 0;	
}

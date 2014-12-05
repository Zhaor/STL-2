#include <iostream>
#include <deque>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	deque<int> coll;
	for(int i=3; i<=7; ++i)
		coll.push_back(i);
	for(int i=2; i<=6; ++i)
		coll.push_back(i);
	for(int i=1; i<=5; ++i)
		coll.push_back(i);
	PRINT_ELEMENTS(coll);
	
	partial_sort(coll.begin(), coll.begin()+5, coll.end());
	PRINT_ELEMENTS(coll);
	
	partial_sort(coll.begin(), coll.begin()+5, coll.end(), greater<int>());
	PRINT_ELEMENTS(coll);
	
	partial_sort(coll.begin(), coll.end(), coll.end());
	PRINT_ELEMENTS(coll);
	
	return 0;
}

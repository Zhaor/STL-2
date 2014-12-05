#include <iostream>
#include <list>
#include <deque>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	deque<int> coll;
	list<int> subcoll;
	
	for(int i=1; i<=9; ++i)
		coll.push_back(i);
	for(int i=1; i<=9; ++i)
		coll.push_back(i);
	
	for(int i=3; i<=6; ++i)
		subcoll.push_back(i);
	
	deque<int>::iterator pos;
	pos = search(coll.begin(), coll.end(), 
			subcoll.begin(), subcoll.end());
	
	while(pos != coll.end())
	{
		cout <<"subcoll found starting with elements: "
			<< distance(coll.begin(), pos)+1 <<endl;
		++pos;
		pos = search(pos, coll.end(), subcoll.begin(), subcoll.end());
	}
	return 0;
}



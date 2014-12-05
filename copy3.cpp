#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	list<int> coll1;
	
	//insert elements from 1 to 9 into the first collection
	for(int i=1; i<=9; ++i)
	{
		coll1.push_back(i);
	}
	
	list<int>::iterator pos;
	for(pos = coll1.begin(); pos!=coll1.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;
	
	//copy the elements of coll1 into coll2 by appending them
	vector<int> coll2;
	copy(coll1.begin(), coll1.end(),back_inserter(coll2));

	vector<int>::iterator pos2;
	for(pos2 = coll2.begin(); pos2!=coll2.end(); ++pos2)
	{
		cout << *pos2 << ' ';
	}
	cout << endl;
	//copy the elements of coll1 into coll3 bu inserting them 
	deque<int> coll3;
	copy(coll1.begin(), coll1.end(), front_inserter(coll3));
	deque<int>::iterator pos3;
	for(pos3 = coll3.begin(); pos3!=coll3.end(); ++pos3)
	{
		cout << *pos3 << ' ';
	}
	cout << endl;
	
	set<int> coll4;
	copy(coll1.begin(), coll1.end(), inserter(coll4, coll4.begin()));
	set<int>::iterator pos4;
	for(pos4=coll4.begin(); pos4!=coll4.end(); ++pos4)
	{
		cout << *pos4 << ' ';
	}
	cout << endl;
	return 0;
}	

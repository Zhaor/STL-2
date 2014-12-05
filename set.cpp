#include <iostream>
#include <set>
using namespace std;

int main()
{
//	typedef std::set<int> IntSet;
	typedef std::multiset<int> IntSet;	
	IntSet coll;
	
	coll.insert(3);
	coll.insert(1);
	coll.insert(5);
	coll.insert(4);
	coll.insert(1);
	coll.insert(6);
	coll.insert(2);
	
	IntSet::const_iterator pos;
	for(pos = coll.begin(); pos != coll.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;
	return 0;
}

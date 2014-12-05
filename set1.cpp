#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	typedef set<int, greater<int> > IntSet;
	
	IntSet coll1;
	
	coll1.insert(4);
	coll1.insert(3);
	coll1.insert(5);
	coll1.insert(1);
	coll1.insert(6);
	coll1.insert(2);
	coll1.insert(5);
	
	IntSet::iterator pos;
	for(pos = coll1.begin(); pos != coll1.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;

	set<int> coll2(coll1.begin(), coll1.end());
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	coll2.erase(coll2.begin(), coll2.find(3));
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	int num;
	num = coll2.erase(5);
	cout << num << " element(s) removed" << endl;

	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}

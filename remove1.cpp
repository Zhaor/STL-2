#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	list<int> coll;
	for(int i = 1; i <= 9; ++i)
	{
		coll.push_front(i);
		coll.push_back(i);
	}

	cout << "pre:";
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	remove(coll.begin(), coll.end(), 3);
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	return 0;
}

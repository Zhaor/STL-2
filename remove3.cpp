#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	set<int> coll;
	
	for(int i = 1; i <= 9; ++i)
	{
		coll.insert(i);
	
	}
	coll.insert(3);
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	int num = coll.erase(3);
	
	cout << "number of removed elements:" << endl;
	
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}

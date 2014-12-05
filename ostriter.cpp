#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	ostream_iterator<int> intWriter(cout, "\n");
	
	*intWriter = 42;
	intWriter++;
	*intWriter = 77;
	intWriter++;
	*intWriter = -5;

	vector<int> coll;
	for(int i=1;i<=9; ++i)
	{
		coll.push_back(i);
	}
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout));
	cout << endl;
	
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " < "));
	cout << endl;
	
	return 0;
}


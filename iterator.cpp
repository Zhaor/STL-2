#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> coll;
	
	for(int i = -3; i <= 9; ++i)
	{
		coll.push_back(i);
	}
	
	cout << "number/distance: " << coll.end() - coll.begin() << endl;

	vector<int>::iterator pos;
	for(int i = 0; i<coll.size(); ++i)
	{
		cout << coll.begin()[i] << ' ';
	}
	cout << endl;

	for(pos = coll.begin(); pos != coll.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;
	return 0;
}

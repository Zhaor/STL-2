#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> coll;
	vector<int>::iterator pos;

	coll.push_back(2);
	coll.push_back(5);
	coll.push_back(4);
	coll.push_back(1);
	coll.push_back(6);
	coll.push_back(3);
		
	//find and print mininum and maxinum elements
	pos = min_element(coll.begin(), coll.end());
	cout << "min:" << *pos << endl;
	pos = max_element(coll.begin(), coll.end());
	cout << "max:" << *pos << endl;

	//sort all elements
	sort(coll.begin(), coll.end());
	for(pos = coll.begin(); pos != coll.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;

	//find the first element with value 3
	pos = find(coll.begin(), coll.end(), 3);
	cout << *pos << endl;

	reverse(pos, coll.end());

	for(pos = coll.begin(); pos != coll.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;
	return 0;
}

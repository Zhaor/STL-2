#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	deque<string> coll;
	
	coll.assign(3, string("string"));
	coll.push_front("first string");
	coll.push_back("last string");

	copy(coll.begin(), coll.end(), 
		ostream_iterator<string>(cout, " "));
	cout << endl;

	coll.pop_back();
	coll.pop_front();

	for(int i=1; i<coll.size(); ++i)
	{
		coll[i] = "another " + coll[i];
	}
	
	coll.resize(4, "resized string");
	
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, " "));
	cout << endl;

	return 0;
}

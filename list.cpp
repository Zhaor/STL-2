#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<char> coll;
	
	for(char c='a'; c<='z'; ++c)
	{
		coll.push_back(c);
	}

/*	while(!coll.empty())
	{
		cout << coll.front() << ' ';
		coll.pop_front(); 
	}
	cout << endl;*/
	
	list<char>::const_iterator pos;
	for(pos = coll.begin(); pos != coll.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << endl;
	return 0;
}

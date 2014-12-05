#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{	
	list<int> coll1;
	vector<int> coll2;

	for(int i=1; i <= 9; ++i)
	{	
		coll1.push_back(i);
	}
	
	//resize destination to have enough room for the 
	//overwriting algotithm
	coll2.resize(coll1.size());
	copy(coll1.begin(), coll1.end(), coll2.begin());

	vector<int>::iterator pos;
	for(pos = coll2.begin(); pos != coll2.end(); ++pos)
	{
		cout << *pos << endl;
	}
	return 0;
}

#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;

template <class K, class V>
class value_equals
{
public:
	value_euqals(V& v):value(v)
	{
	}
	
	bool operator() (pair<const K, V> elem)
	{
		return elem.second == value;
	}
private:
	V value;
};

int main()
{
	typedef map<float,double> FloatFloatMap;
	FloatFloatMap coll;
	FloatFloatMap::iterator pos;

	coll[1] = 7;
	coll[2] = 4;
	coll[3] = 2;
	coll[4] = 3;
	coll[5] = 6;
	coll[6] = 1;
	coll[7] = 3;

	//search an element with key
	pos = coll.find(3.0);
	if(pos != coll.end())
	{
		cout << pos->first << ": "
			<< pos->second << endl;
	}

	//search an element with value 3.0
	pos = find_if(coll.begin(), coll.end(),
			 value_equals<float, double>(3.0));
	if(pos != coll.end())
	{
		cout << pos->first << ": "
			<< pos->second << endl;
	}

	return 0;
}

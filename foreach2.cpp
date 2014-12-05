#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class PrintInt
{
public:
	void operator() (int elem) const
	{
		cout << elem << ' ';
	}
};
	
//function object 
int main()
{
	vector<int> coll;
	for(int i=1; i <= 9; ++i)
	{
		coll.push_back(i);
	}
	
	//function object
	for_each(coll.begin(), coll.end(), PrintInt());
	cout << endl;
	
	return 0;
}


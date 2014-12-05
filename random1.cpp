#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "print.cpp"
using namespace std;

class MyRandom
{
public:
	ptrdiff_t operator() (ptrdiff_t max)
	{
		double tmp;
		tmp = static_cast<double>(rand())	
			/static_cast<double>(RAND_MAX);
		return static_cast<ptrdiff_t>(tmp * max);
	}
};

int main()
{
	vector<int> coll;
	
	for(int i=1; i<=9; ++i)
		coll.push_back(i);
	PRINT_ELEMENTS(coll, "coll: ");
	
	random_shuffle(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "shuffled: ");
	
	sort(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "sorted: ");
	
	MyRandom rd;
	random_shuffle(coll.begin(), coll.end(), rd);
	PRINT_ELEMENTS(coll, "shuffled: ");

	return 0;
}

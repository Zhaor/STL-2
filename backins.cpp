#include <iostream>
#include <vector>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
	vector<int> coll;
	back_insert_iterator<vector<int> > iter(coll);
	
	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;
	
	PRINT_ELEMENTS(coll);
	cout << endl;
	
	back_inserter(coll) = 44;
	back_inserter(coll) = 55;

	PRINT_ELEMENTS(coll); 
}

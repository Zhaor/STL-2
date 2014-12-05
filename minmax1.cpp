#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include "print.cpp"
using namespace std;

bool absLess(int elem1, int elem2)
{
	return abs(elem1) < abs(elem2);
}

int main()
{
	vector<int> coll;
	for(int i=1; i<=9; ++i)
	{
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll);

	cout <<"minimum: " << *min_element(coll.begin(), coll.end()) << endl;
	cout << "maximum: " << *max_element(coll.begin(), coll.end()) << endl;

	cout << "minimum of absolute values: "
		<< *min_element(coll.begin(), coll.end(), absLess) << endl;

	cout << "maximum of absolute values: "
		<< *max_element(coll.begin(), coll.end(), absLess) << endl;

	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "print.cpp"
using namespace std;

int main()
{
	vector<int> coll;
	
	for(int i=1; i<=9; ++i)
		coll.push_back(i);
	
	reverse(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "coll: ");

	reverse(coll.begin()+1, coll.end()-1);
	PRINT_ELEMENTS(coll, "coll: ");
	
	reverse_copy(coll.begin(), coll.end(),
			ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}

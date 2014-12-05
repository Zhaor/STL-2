#include <iostream>
#include <vector>
#include <algorithm>
#include "print.cpp"
using namespace std;

bool isEven(int elem)
{
	return elem % 2 == 0;
}

int main()
{
	vector<int> coll;
	int num;
	
	for(int i=1; i<=9; ++i)
	{
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll);
	
	num = count(coll.begin(), coll.end(), 4);
	cout << "number of elements equal to 4 " << num << endl;
	
	num = count_if(coll.begin(), coll.end(), isEven);
	cout <<"number of element with even value: " << num << endl;

	num = count_if(coll.begin(), coll.end(), bind2nd(greater<int>(), 4));
	cout << "number of elements greater than 4: " << num << endl;

	num = count_if(coll.begin(), coll.end(), not1(bind2nd(modulus<int>(), 2)));
	cout << "number of elements with even value: " << num << endl;
	return 0;
}

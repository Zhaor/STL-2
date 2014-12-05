#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "print.cpp"
using namespace std;

bool bothEvenOrOdd(int elem1, int elem2)
{
	return elem1 %2 == elem2 %2;
}
int main()
{
	vector<int> coll1;
	list<int> coll2;

	for(int i=1; i<=7; ++i)
		coll1.push_back(i);
	for(int i=3; i<=9; ++i)
		coll2.push_back(i);

	PRINT_ELEMENTS(coll1, "coll1:");
	PRINT_ELEMENTS(coll2, "coll2:");
	
	if(equal(coll1.begin(), coll1.end(),coll2.begin()))
	{
		cout << "coll1 == coll2" << endl;
	}else{
		cout << "coll1 != coll2" << endl;
	}
	
	if(equal(coll1.begin(), coll1.end(),coll2.begin(),bothEvenOrOdd))
	{
		cout << "even and odd elements correspond" << endl;
	}
	else
	{
		cout <<" even and odd elements do not correspond" << endl;
	}

	return 0;
	
}

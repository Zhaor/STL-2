#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main()
{
	int coll[] = { 5, 6, 2, 4, 1, 3 };
	
	transform(coll, coll+6, 	//first source
			coll, 		//second source
			coll, 		//destination
			multiplies<int>());		//operation
	sort(coll, coll+6);
	
	//print all elements
	copy(coll, coll+6, 
		ostream_iterator<int>(cout, " "));
	cout << endl;
	
	return 0;
}

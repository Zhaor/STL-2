#include <algorithm>
#include <iostream>
using namespace std;

bool int_ptr_less(int*a , int* b)
{
	return *a < *b;
}

int main()
{
	int x = 17;
	int y = 42;
	int* px = &x;
	int* py = &y;
	int *pmax;

	pmax = max(px, py, int_ptr_less); 

	cout << *pmax << endl;
	
	return 0;
}
